/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2019 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "lwip/tcpip.h"
#include "board.h"
#include "wwd.h"
#include "wwd_wiced.h"
#include "platform_imxrt.h"
#include "fsl_debug_console.h"
#include "ble_hello_sensor.h"

#include "clock_config.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define AP_SSID "nxp"
#define AP_PASS "NXP0123456789"
#define AP_SEC  WICED_SECURITY_WPA2_MIXED_PSK

/*******************************************************************************
 * Prototypes
 ******************************************************************************/


extern wwd_result_t test_scan();
extern wiced_result_t wiced_wlan_connectivity_init(void);
extern void add_wlan_interface(void);

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

/* The function sets the cacheable memory to shareable, this suggestion is referred from chapter 2.2.1 Memory regions,
 * types and attributes in Cortex-M7 Devices, Generic User Guide */
void BOARD_ConfigUSBMPU()
{
    /* Disable I cache and D cache */
    SCB_DisableICache();
    SCB_DisableDCache();

    /* Disable MPU */
    ARM_MPU_Disable();
    /* MPU configure:
     * Use ARM_MPU_RASR(DisableExec, AccessPermission, TypeExtField, IsShareable, IsCacheable, IsBufferable,
     * SubRegionDisable, Size)
     * API in core_cm7.h.
     * param DisableExec       Instruction access (XN) disable bit,0=instruction fetches enabled, 1=instruction fetches
     * disabled.
     * param AccessPermission  Data access permissions, allows you to configure read/write access for User and
     * Privileged mode.
     *      Use MACROS defined in core_cm7.h:
     * ARM_MPU_AP_NONE/ARM_MPU_AP_PRIV/ARM_MPU_AP_URO/ARM_MPU_AP_FULL/ARM_MPU_AP_PRO/ARM_MPU_AP_RO
     * Combine TypeExtField/IsShareable/IsCacheable/IsBufferable to configure MPU memory access attributes.
     *  TypeExtField  IsShareable  IsCacheable  IsBufferable   Memory Attribtue    Shareability        Cache
     *     0             x           0           0             Strongly Ordered    shareable
     *     0             x           0           1              Device             shareable
     *     0             0           1           0              Normal             not shareable   Outer and inner write
     * through no write allocate
     *     0             0           1           1              Normal             not shareable   Outer and inner write
     * back no write allocate
     *     0             1           1           0              Normal             shareable       Outer and inner write
     * through no write allocate
     *     0             1           1           1              Normal             shareable       Outer and inner write
     * back no write allocate
     *     1             0           0           0              Normal             not shareable   outer and inner
     * noncache
     *     1             1           0           0              Normal             shareable       outer and inner
     * noncache
     *     1             0           1           1              Normal             not shareable   outer and inner write
     * back write/read acllocate
     *     1             1           1           1              Normal             shareable       outer and inner write
     * back write/read acllocate
     *     2             x           0           0              Device              not shareable
     *  Above are normal use settings, if your want to see more details or want to config different inner/outter cache
     * policy.
     *  please refer to Table 4-55 /4-56 in arm cortex-M7 generic user guide <dui0646b_cortex_m7_dgug.pdf>
     * param SubRegionDisable  Sub-region disable field. 0=sub-region is enabled, 1=sub-region is disabled.
     * param Size              Region size of the region to be configured. use ARM_MPU_REGION_SIZE_xxx MACRO in
     * core_cm7.h.
     */
    MPU->RBAR = ARM_MPU_RBAR(7, 0x80000000U);
    MPU->RASR = ARM_MPU_RASR(0, ARM_MPU_AP_FULL, 0, 1, 1, 1, 0, ARM_MPU_REGION_SIZE_32MB);
    /* Enable MPU */
    ARM_MPU_Enable(MPU_CTRL_PRIVDEFENA_Msk);

    /* Enable I cache and D cache */
    SCB_EnableDCache();
    SCB_EnableICache();
}


void USB_DeviceClockInit(void)
{
#if defined(USB_DEVICE_CONFIG_EHCI) && (USB_DEVICE_CONFIG_EHCI > 0U)
    usb_phy_config_struct_t phyConfig = {
        BOARD_USB_PHY_D_CAL,
        BOARD_USB_PHY_TXCAL45DP,
        BOARD_USB_PHY_TXCAL45DM,
    };
#endif
#if defined(USB_DEVICE_CONFIG_EHCI) && (USB_DEVICE_CONFIG_EHCI > 0U)
    if (CONTROLLER_ID == kSerialManager_UsbControllerEhci0)
    {
        CLOCK_EnableUsbhs0PhyPllClock(kCLOCK_Usbphy480M, 480000000U);
        CLOCK_EnableUsbhs0Clock(kCLOCK_Usb480M, 480000000U);
    }
    else
    {
        CLOCK_EnableUsbhs1PhyPllClock(kCLOCK_Usbphy480M, 480000000U);
        CLOCK_EnableUsbhs1Clock(kCLOCK_Usb480M, 480000000U);
    }
    USB_EhciPhyInit(CONTROLLER_ID, BOARD_XTAL0_CLK_HZ, &phyConfig);
#endif
}


static void BOARD_InitNetwork()
{
    wwd_result_t err         = WWD_SUCCESS;
    wiced_result_t wiced_err = WICED_SUCCESS;

    wiced_ssid_t ap_ssid = {
        .length = sizeof(AP_SSID) - 1,
        .value  = AP_SSID,
    };

    PRINTF("Initializing WiFi Connection... \r\n");
    wiced_err = wiced_wlan_connectivity_init();
    if (wiced_err != WICED_SUCCESS)
    {
        PRINTF("Could not initialize wifi connection \r\n");
        vTaskSuspend(NULL);
        return;
    }

    PRINTF("Successfully Initialized WiFi Connection \r\n");

    err = test_scan();
    if (err != WWD_SUCCESS)
    {
        PRINTF(" Scan Error \r\n");
    }

    PRINTF("Joining : " AP_SSID "\r\n");
    (void)host_rtos_delay_milliseconds((uint32_t)1000);
    err = wwd_wifi_join(&ap_ssid, AP_SEC, (uint8_t *)AP_PASS, sizeof(AP_PASS) - 1, NULL, WWD_STA_INTERFACE);
    if (err != WWD_SUCCESS)
    {
        PRINTF("Failed to join  : " AP_SSID " \r\n");
    }
    else
    {
        PRINTF("Successfully joined : " AP_SSID "\r\n");
        (void)host_rtos_delay_milliseconds((uint32_t)1000);
        add_wlan_interface();

        /* Start BLE */
        PRINTF("\r\nInitializing BLE... \r\n");
        hello_sensor_start();
    }
}

/*!
 * @brief Initializes wifi and BLE.
 */
static void wifi_ble_init(void *arg)
{
    BOARD_InitNetwork();

#if defined(INCLUDE_uxTaskGetStackHighWaterMark) && INCLUDE_uxTaskGetStackHighWaterMark
    int32_t freeStack = uxTaskGetStackHighWaterMark(NULL);
    PRINTF("Stack high water mark: %d\r\n", freeStack);
#endif

#if defined(configTOTAL_HEAP_SIZE)
    int32_t freeHeap = xPortGetMinimumEverFreeHeapSize();
    PRINTF("Minimum ever free heap size: %d\r\n", freeHeap);
#endif

    vTaskDelete(NULL);
}

static int32_t nvm_save(uint32_t addr, uint8_t *data, uint32_t length)
{
    assert(0); /* Not implemented. */
    return 0;
}

static int32_t nvm_read(uint32_t addr, uint8_t *data, uint32_t length)
{
    assert(0); /* Not implemented. */
    return 0;
}

static int32_t nvm_erase(uint32_t addr)
{
    assert(0); /* Not implemented. */
    return 0;
}

/*!
 * @brief Main function.
 */
int main(void)
{
    platform_nvm_t nvm_cfg;

    BOARD_ConfigMPU();
    BOARD_ConfigUSBMPU();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();

    PRINTF("\r\n************************************************\r\n");
    PRINTF(" Wi-Fi + BLE example\r\n");
    PRINTF("************************************************\r\n");

    tcpip_init(NULL, NULL);

    nvm_cfg.platform_nvm_save  = nvm_save;
    nvm_cfg.platform_nvm_read  = nvm_read;
    nvm_cfg.platform_nvm_erase = nvm_erase;
    platform_set_nvm(&nvm_cfg);

    if (xTaskCreate(wifi_ble_init, "wifi_ble_init", 1000, NULL, 1, NULL) != pdPASS)
    {
        PRINTF("Task creation failed!\r\n");
        while (1)
            ;
    }

    /* Run RTOS */
    vTaskStartScheduler();

    /* Should not reach this statement */
    for (;;)
        ;
}
