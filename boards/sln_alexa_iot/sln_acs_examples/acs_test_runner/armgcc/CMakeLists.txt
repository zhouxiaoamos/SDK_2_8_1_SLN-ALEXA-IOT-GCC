INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m7")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv5-d16")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m7")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv5-d16")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DLWIP_TIMEVAL_PRIVATE=0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MIMXRT106ADVL6A")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MIMXRT106ADVL6A_cm7")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DPRINTF_FLOAT_ENABLE=0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSCANF_FLOAT_ENABLE=0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DPRINTF_ADVANCED_ENABLE=0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSCANF_ADVANCED_ENABLE=0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DXIP_EXTERNAL_FLASH=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DXIP_BOOT_HEADER_ENABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DXIP_BOOT_HEADER_DCD_ENABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D__USE_CMSIS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DAPP_MAJ_VER=0x02")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DAPP_MIN_VER=0x00")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DAPP_BLD_VER=0x0000")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG_CONSOLE_ENABLE_ECHO")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSB_CDC_SERIAL_MANAGER_RUN_NO_HOST=0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DRELOCATE_VECTOR_TABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DHAL_UART_TRANSFER_MODE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_CONFIG_OVERRIDES='\"rt106a_ace_config.h\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_HAL_DEVICE_INFO_PRODUCT_NAME='\"SLN_ALEXA_IOT\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_HAL_DEVICE_INFO_HARDWARE_NAME='\"MIMXRT106A\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DWICED_BLUETOOTH_PLATFORM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DERASE_PARTIAL_SECTORS=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D__SEMIHOST_HARDFAULT_DISABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSERIAL_PORT_TYPE_USBCDC=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSERIAL_MANAGER_NON_BLOCKING_MODE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUART1_BLE_SERIAL_MANANGER_BLOCKING_MODE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSB_STACK_FREERTOS_HEAP_SIZE=65536")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSB_STACK_FREERTOS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DBOARD_USE_VIRTUALCOM=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG_CONSOLE_IO_USBCDC=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG_CONSOLE_TRANSFER_NON_BLOCKING")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DARM_MATH_CM7")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSDK_DEBUGCONSOLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCR_INTEGER_PRINTF")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSDK_I2C_BASED_COMPONENT_USED=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSE_RTOS=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DLWIP_DNS=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DLWIP_DHCP=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DRTOS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DAMAZON_MBEDTLS_LWIP_PATCHES")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DAMAZON_TESTS_ENABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCONFIG_FLEXRAM_AT_STARTUP=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSDK_DEBUGCONSOLE_UART")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_HAL_DEVICE_INFO_MANUFACTURER_NAME='\"NXP\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_HAL_DEVICE_INFO_OS_VERSION='\"10.3.0\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_WIFI_ENABLE_MW_AUTO_CONNECT_NXP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_WIFI_HAL_AUTO_CONNECT")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DMBEDTLS_CONFIG_FILE='\"aws_mbedtls_config.h\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DAWS_LOGGING_INCLUDE='\"iot_logging_task.h\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DAWS_SYS_INIT_INCLUDE='\"iot_system_init.h\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DAWS_MQTT_AGENT_INCLUDE='\"iot_mqtt_agent.h\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DAWS_VERSION_INCLUDE='\"iot_appversion32.h\"'")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEMO_NETWORK_TYPE=AWSIOT_NETWORK_TYPE_WIFI")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Dmalloc=pvPortMalloc")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Dfree=vPortFree")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Dcalloc=pvPortCalloc")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Drealloc=pvPortRealloc")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSERIAL_PORT_TYPE_USBCDC=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSB_DEVICE_CONFIG_CDC_ACM=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSDK_I2C_BASED_COMPONENT_USED=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSDIO_ENABLED")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_COMPONENT_libace_connectivity_manager")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_COMPONENT_hal_factoryreset")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_COMPONENT_hal_device_info")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_COMPONENT_hal_kv_storage")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DACE_COMPONENT_hal_dha")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSERIAL_PORT_TYPE_UART=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DWIFI_WICED")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mno-unaligned-access")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -specs=nano.specs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fomit-frame-pointer")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m7")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv5-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DLWIP_TIMEVAL_PRIVATE=0")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MIMXRT106ADVL6A")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MIMXRT106ADVL6A_cm7")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DPRINTF_FLOAT_ENABLE=0")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSCANF_FLOAT_ENABLE=0")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DPRINTF_ADVANCED_ENABLE=0")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSCANF_ADVANCED_ENABLE=0")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DXIP_EXTERNAL_FLASH=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DXIP_BOOT_HEADER_ENABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DXIP_BOOT_HEADER_DCD_ENABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -D__USE_CMSIS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DAPP_MAJ_VER=0x02")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DAPP_MIN_VER=0x00")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DAPP_BLD_VER=0x0000")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DDEBUG_CONSOLE_ENABLE_ECHO")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSB_CDC_SERIAL_MANAGER_RUN_NO_HOST=0")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DRELOCATE_VECTOR_TABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DHAL_UART_TRANSFER_MODE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_CONFIG_OVERRIDES='\"rt106a_ace_config.h\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_HAL_DEVICE_INFO_PRODUCT_NAME='\"SLN_ALEXA_IOT\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_HAL_DEVICE_INFO_HARDWARE_NAME='\"MIMXRT106A\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DWICED_BLUETOOTH_PLATFORM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DERASE_PARTIAL_SECTORS=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -D__SEMIHOST_HARDFAULT_DISABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSERIAL_PORT_TYPE_USBCDC=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSERIAL_MANAGER_NON_BLOCKING_MODE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUART1_BLE_SERIAL_MANANGER_BLOCKING_MODE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSB_STACK_FREERTOS_HEAP_SIZE=65536")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSB_STACK_FREERTOS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DBOARD_USE_VIRTUALCOM=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DDEBUG_CONSOLE_IO_USBCDC=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DDEBUG_CONSOLE_TRANSFER_NON_BLOCKING")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DARM_MATH_CM7")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSDK_DEBUGCONSOLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCR_INTEGER_PRINTF")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSDK_I2C_BASED_COMPONENT_USED=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSE_RTOS=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DLWIP_DNS=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DLWIP_DHCP=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DRTOS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DAMAZON_MBEDTLS_LWIP_PATCHES")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DAMAZON_TESTS_ENABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCONFIG_FLEXRAM_AT_STARTUP=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSDK_DEBUGCONSOLE_UART")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_HAL_DEVICE_INFO_MANUFACTURER_NAME='\"NXP\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_HAL_DEVICE_INFO_OS_VERSION='\"10.3.0\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_WIFI_ENABLE_MW_AUTO_CONNECT_NXP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_WIFI_HAL_AUTO_CONNECT")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DMBEDTLS_CONFIG_FILE='\"aws_mbedtls_config.h\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DAWS_LOGGING_INCLUDE='\"iot_logging_task.h\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DAWS_SYS_INIT_INCLUDE='\"iot_system_init.h\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DAWS_MQTT_AGENT_INCLUDE='\"iot_mqtt_agent.h\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DAWS_VERSION_INCLUDE='\"iot_appversion32.h\"'")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DDEMO_NETWORK_TYPE=AWSIOT_NETWORK_TYPE_WIFI")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Dmalloc=pvPortMalloc")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Dfree=vPortFree")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Dcalloc=pvPortCalloc")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Drealloc=pvPortRealloc")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSERIAL_PORT_TYPE_USBCDC=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSB_DEVICE_CONFIG_CDC_ACM=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSDK_I2C_BASED_COMPONENT_USED=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSDIO_ENABLED")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_COMPONENT_libace_connectivity_manager")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_COMPONENT_hal_factoryreset")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_COMPONENT_hal_device_info")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_COMPONENT_hal_kv_storage")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DACE_COMPONENT_hal_dha")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSERIAL_PORT_TYPE_UART=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DWIFI_WICED")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O0")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -g")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mno-unaligned-access")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -specs=nano.specs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fomit-frame-pointer")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m7")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv5-d16")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DSERIAL_PORT_TYPE_USBCDC=1")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG_CONSOLE_TRANSFER_NON_BLOCKING")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DUSB_DEVICE_CONFIG_CDC_ACM=1")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DSERIAL_PORT_TYPE_UART=1")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mcpu=cortex-m7")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfpu=fpv5-d16")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mthumb")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MMD")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MP")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-common")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mapcs")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-rtti")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DSERIAL_PORT_TYPE_USBCDC=1")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DDEBUG_CONSOLE_TRANSFER_NON_BLOCKING")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DUSB_DEVICE_CONFIG_CDC_ACM=1")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DSERIAL_PORT_TYPE_UART=1")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mcpu=cortex-m7")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfpu=fpv5-d16")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mthumb")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MMD")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MP")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-common")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mapcs")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-rtti")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-exceptions")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__stack_size__=0x1000")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__heap_size__=0x1A000")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -print-memory-usage")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__stack_size__=0x1000")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__heap_size__=0x1000")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__stack_size__=0x2000")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__heap_size__=0x8000")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__stack_size__=0x1000")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__heap_size__=0x1A000")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -print-memory-usage")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__stack_size__=0x1000")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__heap_size__=0x1000")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__stack_size__=0x2000")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__heap_size__=0x8000")

include_directories(${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../config_files)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/apps/common/smarthome_sdk/sdk/asd_time)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/apps/common/startup/inc)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/apps/common/test_runner/inc)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/apps/rt106a/common/freertos/include)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/apps/rt106a/common/common_init/include)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/apps/rt106a/test_runner/inc)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/apps/rt106a/test_runner/inc/config_files)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/apps/rt106a/test_runner/inc/test_config)

include_directories(${ProjDirPath}/../../../../../middleware/lwip/src/include)

include_directories(${ProjDirPath}/../../..)

include_directories(${ProjDirPath}/../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../devices)

include_directories(${ProjDirPath}/../../../../../middleware/mbedtls/include)

include_directories(${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/src)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/private)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/serializer/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/demos/dev_mode_key_provisioning/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/utils/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/crypto/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/secure_sockets/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/freertos/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/tls/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/pkcs11/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/3rdparty/pkcs11)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/demos/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/demos/network_manager)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/wifi/include)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/Unity/extras/fixture/src)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/app)

include_directories(${ProjDirPath}/../../../../../components/serial_manager)

include_directories(${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers)

include_directories(${ProjDirPath}/../../../../../components/lists)

include_directories(${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter)

include_directories(${ProjDirPath}/../../../../../middleware/lwip/port)

include_directories(${ProjDirPath}/../../../../../middleware/lwip/src)

include_directories(${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities/str)

include_directories(${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities/debug_console)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/platforms/MURATA_TYPE1DX)

include_directories(${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/flash_mgmt)

include_directories(${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/custom_config/flash/is26kl256s)

include_directories(${ProjDirPath}/../../../../../middleware/usb/phy)

include_directories(${ProjDirPath}/../../../../../components/osa)

include_directories(${ProjDirPath}/../../../../../middleware/usb/device)

include_directories(${ProjDirPath}/../../../../../middleware/usb/include)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/flash/is26kl256s)

include_directories(${ProjDirPath}/../../../../../components/codec/i2c)

include_directories(${ProjDirPath}/../../../../../components/i2c)

include_directories(${ProjDirPath}/../../../../../middleware/sdmmc/sdio)

include_directories(${ProjDirPath}/../../../../../middleware/sdmmc/common)

include_directories(${ProjDirPath}/../../../../../middleware/sdmmc/host/usdhc)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/device_info/inc)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/dha/src/port)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/dha/src/crypto_utils)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/log)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/factory_reset/inc)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/wifi/inc)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_system_tools)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/bootctl)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/debug)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/include)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/metric)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/mbedtls)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/internal)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/portable/MemMang)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/arpa)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/cJSON)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/abstract)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/abstract/protocols)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/abstract/transports)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/nanopb)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/sys)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/toolchain)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/test/iot_tests)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_cli)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/cli/inc)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/tests/include)

include_directories(${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/common_io/test)

include_directories(${ProjDirPath}/../../../../../devices/MIMXRT106A)

include_directories(${ProjDirPath}/../../../../../components/uart)

include_directories(${ProjDirPath}/../../../../../devices/MIMXRT106A/xip)

include_directories(${ProjDirPath}/../../../xip)

include_directories(${ProjDirPath}/../../../../../middleware/usb/output/source/device/class)

include_directories(${ProjDirPath}/../../../../../middleware/usb/output/source/device)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/bt_app_inc)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/WICED)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Components/stack/include)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Projects/bte/main)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/include)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/network/LwIP/WWD)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/include)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/MCU)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/MCU/LPC)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/MCU/LPC/WWD)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/RTOS/FreeRTOS/WWD)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/network)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/platform)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/RTOS)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal)

include_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/bus_protocols/SDIO)

include_directories(${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip)

include_directories(${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/security)

include_directories(${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/boot_code/common)

include_directories(${ProjDirPath}/../../../../../middleware/sdmmc/osa)

include_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/py_crc)

include_directories(${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities)

add_executable(acs_test_runner.elf 
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../../../common/sln_file_table.h"
"${ProjDirPath}/../../../common/sln_cfg_file.h"
"${ProjDirPath}/../dhcp_server.c"
"${ProjDirPath}/../dhcp_server.h"
"${ProjDirPath}/../app_init.h"
"${ProjDirPath}/../app_cli.h"
"${ProjDirPath}/../flash_map_ext.h"
"${ProjDirPath}/../aws_clientcredential_keys.h"
"${ProjDirPath}/../aws_clientcredential.h"
"${ProjDirPath}/../freertos_tasks_c_additions.h"
"${ProjDirPath}/../aws_demo.h"
"${ProjDirPath}/../iot_demo_logging.h"
"${ProjDirPath}/../iot_freertos_init.c"
"${ProjDirPath}/../perf.c"
"${ProjDirPath}/../sln_time_utils.c"
"${ProjDirPath}/../app_init.c"
"${ProjDirPath}/../main_task.c"
"${ProjDirPath}/../main.c"
"${ProjDirPath}/../tcpip_manager.c"
"${ProjDirPath}/../tcpip_manager.h"
"${ProjDirPath}/../../../sdmmc_config.c"
"${ProjDirPath}/../../../sdmmc_config.h"
"${ProjDirPath}/../config_files/iot_config_common.h"
"${ProjDirPath}/../config_files/FreeRTOSConfig.h"
"${ProjDirPath}/../config_files/FreeRTOSIPConfig.h"
"${ProjDirPath}/../config_files/aws_iot_network_config.h"
"${ProjDirPath}/../config_files/aws_mbedtls_config.h"
"${ProjDirPath}/../config_files/aws_mqtt_config.h"
"${ProjDirPath}/../config_files/aws_demo_config.h"
"${ProjDirPath}/../config_files/aws_secure_sockets_config.h"
"${ProjDirPath}/../config_files/aws_shadow_config.h"
"${ProjDirPath}/../config_files/aws_wifi_config.h"
"${ProjDirPath}/../config_files/iot_config.h"
"${ProjDirPath}/../config_files/iot_mqtt_agent_config.h"
"${ProjDirPath}/../config_files/iot_pkcs11_config.h"
"${ProjDirPath}/../config_files/lwipopts.h"
"${ProjDirPath}/../asd_log_config.h"
"${ProjDirPath}/../ace_cli_config.h"
"${ProjDirPath}/../aws_test_runner_config.h"
"${ProjDirPath}/../unity_config.h"
"${ProjDirPath}/../rt106a_ace_config.h"
"${ProjDirPath}/../sln_reset.c"
"${ProjDirPath}/../sln_reset.h"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../dcd.c"
"${ProjDirPath}/../dcd.h"
"${ProjDirPath}/../ble_hal_adapter.c"
"${ProjDirPath}/../bt_hal_gap.c"
"${ProjDirPath}/../bt_hal_gatt.c"
"${ProjDirPath}/../bt_hall_gatt_helpers.c"
"${ProjDirPath}/../bt_hall_gatt_helpers.h"
"${ProjDirPath}/../wiced_bt_cfg.c"
"${ProjDirPath}/../net_sockets.c"
"${ProjDirPath}/../sntp.c"
"${ProjDirPath}/../sntp.h"
"${ProjDirPath}/../sntp_opts.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_manager.c"
"${ProjDirPath}/../../../../../components/serial_manager/serial_manager.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_internal.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_common.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_common.h"
"${ProjDirPath}/../../../../../components/lists/generic_list.c"
"${ProjDirPath}/../../../../../components/lists/generic_list.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_usb.c"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_usb.h"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_descriptor.c"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_descriptor.h"
"${ProjDirPath}/../usb_device_config.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_cache.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_cache.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_gpt.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_gpt.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/bt_firmware_controller.c"
"${ProjDirPath}/../../../../../middleware/lwip/port/arch/cc.h"
"${ProjDirPath}/../../../../../middleware/lwip/port/arch/perf.h"
"${ProjDirPath}/../../../../../middleware/lwip/port/arch/sys_arch.h"
"${ProjDirPath}/../../../../../middleware/lwip/port/sys_arch.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/api/api_lib.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/api/api_msg.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/api/err.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/api/if_api.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/api/netbuf.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/api/netdb.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/api/netifapi.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/api/sockets.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/api/tcpip.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/altcp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/altcp_alloc.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/altcp_tcp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/def.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/dns.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/inet_chksum.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/init.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ip.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv4/acd.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv4/autoip.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv4/dhcp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv4/etharp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv4/icmp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv4/igmp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv4/ip4.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv4/ip4_addr.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv4/ip4_frag.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv6/dhcp6.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv6/ethip6.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv6/icmp6.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv6/inet6.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv6/ip6.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv6/ip6_addr.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv6/ip6_frag.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv6/mld6.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/ipv6/nd6.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/mem.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/memp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/netif.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/pbuf.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/raw.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/stats.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/sys.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/tcp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/tcp_in.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/tcp_out.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/timeouts.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/core/udp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/compat/posix/arpa/inet.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/compat/posix/net/if.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/compat/posix/netdb.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/compat/posix/sys/socket.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/compat/stdc/errno.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/acd.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/altcp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/altcp_tcp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/altcp_tls.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/api.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/arch.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/autoip.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/debug.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/def.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/dhcp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/dhcp6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/dns.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/err.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/errno.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/etharp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ethip6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/icmp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/icmp6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/if_api.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/igmp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/inet.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/inet_chksum.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/init.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ip.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ip4.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ip4_addr.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ip4_frag.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ip6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ip6_addr.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ip6_frag.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ip6_zone.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/ip_addr.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/mem.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/memp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/mld6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/nd6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/netbuf.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/netdb.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/netif.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/netifapi.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/opt.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/pbuf.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/altcp_priv.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/api_msg.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/mem_priv.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/memp_priv.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/memp_std.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/nd6_priv.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/raw_priv.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/sockets_priv.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/tcp_priv.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/priv/tcpip_priv.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/acd.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/autoip.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/dhcp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/dhcp6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/dns.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/etharp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/ethernet.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/iana.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/icmp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/icmp6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/ieee.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/igmp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/ip.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/ip4.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/ip6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/mld6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/nd6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/tcp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/prot/udp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/raw.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/sio.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/snmp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/sockets.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/stats.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/sys.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/tcp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/tcpbase.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/tcpip.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/timeouts.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/lwip/udp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/bridgeif.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/bridgeif_opts.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/etharp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ethernet.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ieee802154.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/lowpan6.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/lowpan6_ble.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/lowpan6_common.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/lowpan6_opts.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/ccp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/chap-md5.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/chap-new.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/chap_ms.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/eap.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/ecp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/eui64.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/fsm.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/ipcp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/ipv6cp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/lcp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/magic.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/mppe.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/polarssl/arc4.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/polarssl/des.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/polarssl/md4.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/polarssl/md5.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/polarssl/sha1.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/ppp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/ppp_impl.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/ppp_opts.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/pppapi.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/pppcrypt.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/pppdebug.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/pppoe.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/pppol2tp.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/pppos.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/upap.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/ppp/vj.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/slipif.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/include/netif/zepif.h"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/bridgeif.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/bridgeif_fdb.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ethernet.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/lowpan6.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/lowpan6_ble.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/lowpan6_common.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/auth.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/ccp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/chap-md5.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/chap-new.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/chap_ms.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/demand.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/eap.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/eui64.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/fsm.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/ipcp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/ipv6cp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/lcp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/lwip_ecp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/magic.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/mppe.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/multilink.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/ppp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/pppapi.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/pppcrypt.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/pppoe.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/pppol2tp.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/pppos.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/upap.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/utils.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/ppp/vj.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/slipif.c"
"${ProjDirPath}/../../../../../middleware/lwip/src/netif/zepif.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities/debug_console/fsl_debug_console.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities/debug_console/fsl_debug_console.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities/debug_console/fsl_debug_console_conf.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities/str/fsl_str.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities/str/fsl_str.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/platforms/MURATA_TYPE1DX/wifi_nvram_image.h"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/flash_mgmt/sln_flash.c"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/flash_mgmt/sln_flash.h"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/custom_config/flash/is26kl256s/flexspi_hyper_flash_ops.c"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/custom_config/flash/is26kl256s/flexspi_hyper_flash_ops.h"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/custom_config/flash/is26kl256s/sln_flash_config.c"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/custom_config/flash/is26kl256s/sln_flash_config.h"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/custom_config/flash/is26kl256s/sln_flash_ops.h"
"${ProjDirPath}/../../../../../middleware/usb/phy/usb_phy.c"
"${ProjDirPath}/../../../../../middleware/usb/phy/usb_phy.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_dci.c"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_dci.h"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction.h"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction_config.h"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction_free_rtos.c"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction_free_rtos.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_ehci.c"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_ehci.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/flash/is26kl256s/flash_map.h"
"${ProjDirPath}/../../../../../components/codec/i2c/fsl_codec_i2c.c"
"${ProjDirPath}/../../../../../components/codec/i2c/fsl_codec_i2c.h"
"${ProjDirPath}/../../../../../components/i2c/i2c.h"
"${ProjDirPath}/../../../../../components/i2c/lpi2c_adapter.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_snvs_hp.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_snvs_hp.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_pit.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_pit.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_lpuart_freertos.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_lpuart_freertos.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/aes.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/aesni.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/arc4.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/aria.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/asn1.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/asn1write.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/base64.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/bignum.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/blowfish.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/bn_mul.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/camellia.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ccm.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/certs.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/chacha20.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/chachapoly.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/check_config.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/cipher.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/cipher_internal.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/cmac.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/compat-1.3.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/config.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ctr_drbg.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/debug.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/des.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/dhm.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ecdh.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ecdsa.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ecjpake.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ecp.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ecp_internal.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/entropy.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/entropy_poll.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/error.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/gcm.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/havege.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/hkdf.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/hmac_drbg.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/md.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/md2.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/md4.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/md5.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/md_internal.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/memory_buffer_alloc.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/net.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/net_sockets.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/nist_kw.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/oid.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/padlock.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/pem.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/pk.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/pk_internal.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/pkcs11.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/pkcs12.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/pkcs5.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/platform.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/platform_time.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/platform_util.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/poly1305.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ripemd160.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/rsa.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/rsa_internal.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/sha1.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/sha256.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/sha512.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ssl.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ssl_cache.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ssl_ciphersuites.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ssl_cookie.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ssl_internal.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/ssl_ticket.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/threading.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/timing.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/version.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/x509.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/x509_crl.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/x509_crt.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/x509_csr.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/include/mbedtls/xtea.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/aes.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/aesni.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/arc4.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/aria.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/asn1parse.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/asn1write.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/base64.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/bignum.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/blowfish.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/camellia.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ccm.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/certs.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/chacha20.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/chachapoly.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/cipher.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/cipher_wrap.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/cmac.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ctr_drbg.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/debug.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/des.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/dhm.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ecdh.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ecdsa.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ecjpake.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ecp.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ecp_curves.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/entropy.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/entropy_poll.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/error.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/gcm.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/havege.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/hkdf.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/hmac_drbg.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/md.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/md2.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/md4.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/md5.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/md_wrap.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/memory_buffer_alloc.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/net_sockets.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/nist_kw.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/oid.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/padlock.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/pem.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/pk.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/pk_wrap.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/pkcs11.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/pkcs12.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/pkcs5.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/pkparse.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/pkwrite.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/platform.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/platform_util.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/poly1305.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ripemd160.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/rsa.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/rsa_internal.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/sha1.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/sha256.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/sha512.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ssl_cache.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ssl_ciphersuites.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ssl_cli.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ssl_cookie.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ssl_srv.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ssl_ticket.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/ssl_tls.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/threading.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/timing.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/version.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/version_features.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/x509.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/x509_create.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/x509_crl.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/x509_crt.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/x509_csr.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/x509write_crt.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/x509write_csr.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/library/xtea.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/aes_alt.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/aes_alt.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/des_alt.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/des_alt.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/ecp_alt.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/ecp_alt.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/ecp_alt_ksdk.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/ecp_curves_alt.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/ksdk_mbedtls.c"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/ksdk_mbedtls.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/ksdk_mbedtls_config.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/sha1_alt.h"
"${ProjDirPath}/../../../../../middleware/mbedtls/port/ksdk/sha256_alt.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/croutine.c"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/event_groups.c"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/FreeRTOS.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/StackMacros.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/atomic.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/croutine.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/deprecated_definitions.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/event_groups.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/list.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/message_buffer.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/mpu_prototypes.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/mpu_wrappers.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/portable.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/projdefs.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/queue.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/semphr.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/stack_macros.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/stream_buffer.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/task.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/timers.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/list.c"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F/port.c"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F/portmacro.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/portable/MemMang/ReadMe.url"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/queue.c"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/stream_buffer.c"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/tasks.c"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/timers.c"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/portable/MemMang/heap_4.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/include/aws_iot_shadow.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/include/aws_shadow.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/include/types/aws_iot_shadow_types.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/src/aws_iot_shadow_api.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/src/aws_iot_shadow_operation.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/src/aws_iot_shadow_parser.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/src/aws_iot_shadow_static_memory.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/src/aws_iot_shadow_subscription.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/src/aws_shadow.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/src/aws_shadow_config_defaults.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/aws/shadow/src/private/aws_iot_shadow_internal.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/iot_appversion32.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/iot_atomic.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/iot_init.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/iot_linear_containers.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/iot_logging_setup.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/iot_logging_task.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/iot_taskpool.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/private/iot_default_root_certificates.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/private/iot_doubly_linked_list.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/private/iot_error.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/private/iot_lib_init.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/private/iot_logging.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/private/iot_static_memory.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/private/iot_taskpool_internal.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/types/iot_network_types.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/include/types/iot_taskpool_types.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/iot_device_metrics.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/iot_init.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/iot_static_memory_common.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/logging/iot_logging.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/logging/iot_logging_task_dynamic_buffers.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/taskpool/iot_taskpool.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/common/taskpool/iot_taskpool_static_memory.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/include/iot_mqtt.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/include/iot_mqtt_agent.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/include/iot_mqtt_agent_config_defaults.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/include/iot_mqtt_config_defaults.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/include/iot_mqtt_lib.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/include/types/iot_mqtt_types.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src/iot_mqtt_agent.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src/iot_mqtt_api.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src/iot_mqtt_network.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src/iot_mqtt_operation.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src/iot_mqtt_serialize.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src/iot_mqtt_static_memory.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src/iot_mqtt_subscription.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src/iot_mqtt_validate.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/mqtt/src/private/iot_mqtt_internal.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/serializer/include/iot_json_utils.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/serializer/include/iot_serializer.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/serializer/src/iot_json_utils.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/serializer/src/iot_serializer_static_memory.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/serializer/src/json/iot_serializer_json_decoder.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/c_sdk/standard/serializer/src/json/iot_serializer_json_encoder.c"
"${ProjDirPath}/../../../../../rtos/freertos/demos/dev_mode_key_provisioning/include/aws_dev_mode_key_provisioning.h"
"${ProjDirPath}/../../../../../rtos/freertos/demos/dev_mode_key_provisioning/src/aws_dev_mode_key_provisioning.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/3rdparty/mbedtls/utils/mbedtls_utils.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/utils/include/iot_pki_utils.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/utils/include/iot_system_init.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/utils/src/iot_pki_utils.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/utils/src/iot_system_init.c"
"${ProjDirPath}/../../../../../rtos/freertos/vendors/nxp/secure_sockets/lwip/iot_secure_sockets.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/crypto/include/iot_crypto.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/crypto/src/iot_crypto.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/secure_sockets/include/iot_secure_sockets.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/secure_sockets/include/iot_secure_sockets_config_defaults.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/secure_sockets/include/iot_secure_sockets_wrapper_metrics.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/freertos/include/platform/iot_network_ble.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/freertos/include/platform/iot_network_freertos.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/freertos/include/platform/iot_platform_types_freertos.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/freertos/iot_clock_freertos.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/freertos/iot_metrics.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/freertos/iot_network_freertos.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/freertos/iot_threads_freertos.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/include/platform/iot_clock.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/include/platform/iot_metrics.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/include/platform/iot_network.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/include/platform/iot_threads.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/platform/include/types/iot_platform_types.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/tls/include/iot_tls.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/tls/src/iot_tls.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/pkcs11/include/iot_pkcs11.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/freertos_plus/standard/pkcs11/src/iot_pkcs11.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/3rdparty/pkcs11/CONTRIBUTING.md"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/3rdparty/pkcs11/LICENSE.md"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/3rdparty/pkcs11/README.md"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/3rdparty/pkcs11/pkcs11.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/3rdparty/pkcs11/pkcs11f.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/3rdparty/pkcs11/pkcs11t.h"
"${ProjDirPath}/../../../../../rtos/freertos/demos/include/aws_wifi_connect_task.h"
"${ProjDirPath}/../../../../../rtos/freertos/demos/include/iot_ble_numericComparison.h"
"${ProjDirPath}/../../../../../rtos/freertos/demos/network_manager/aws_iot_network_manager.c"
"${ProjDirPath}/../../../../../rtos/freertos/demos/network_manager/iot_network_manager_private.h"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/wifi/include/iot_wifi.h"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/flash_mgmt/sln_flash_mgmt.c"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/flash_mgmt/sln_flash_mgmt.h"
"${ProjDirPath}/../../../../../middleware/sdmmc/sdio/fsl_sdio.c"
"${ProjDirPath}/../../../../../middleware/sdmmc/sdio/fsl_sdio.h"
"${ProjDirPath}/../../../../../middleware/sdmmc/common/fsl_sdmmc_common.c"
"${ProjDirPath}/../../../../../middleware/sdmmc/common/fsl_sdmmc_common.h"
"${ProjDirPath}/../../../../../middleware/sdmmc/common/fsl_sdmmc_spec.h"
"${ProjDirPath}/../../../../../middleware/sdmmc/host/usdhc/fsl_sdmmc_host.h"
"${ProjDirPath}/../../../../../middleware/sdmmc/host/usdhc/fsl_sdmmc_host.h"
"${ProjDirPath}/../../../../../middleware/sdmmc/host/usdhc/non_blocking/fsl_sdmmc_host.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/ace_hal_logging.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/device_info/inc/internal_device_info.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/device_info/src/acehal_device_info.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/dha/src/acehal_dha.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/dha/src/crypto_utils/crypto_utils.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/dha/src/crypto_utils/crypto_utils.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/dha/src/port/port_dha_storage.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/dha/src/port/port_dha_storage_kvs.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/dha/src/port/port_dha_storage_ram.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/factory_reset/inc/acehal_fr_mgr.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/factory_reset/src/acehal_fr.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/factory_reset/src/acehal_fr_mgr.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/kvs/src/acehal_kvs.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/log/acehal_log.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/log/asd_log_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/wifi/inc/aws_wifi_ext.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/wifi/inc/aws_wifi_hal.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/wifi/inc/aws_wifi_log.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/wifi/inc/hal_wifi_private.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/wifi/src/aws_wifi.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/wifi/src/hal_wifi.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/wifi/src/wifi_logging.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/wifi/src/wifi_profile_migration.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_cir_buf.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_cir_flash.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_crypto.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_def.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_error.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_event_manager.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_events.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_flash_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_kvs.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_kvs_str.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_stream.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_utils.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/asd_flash_buffer.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/efuse_manager.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/flash_manager.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/platform_key.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_cir_buf.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_cir_flash.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_error.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_event_manager.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_flash.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_kvs.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_kvs_internal.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_logging.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_utils.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/asd_flash_buffer.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/flash_manager.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_system_tools/asd_tools_handler.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_system_tools/asd_tools_handler.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/asd_crc32.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/asd_crc32.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/asd_parse.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/asd_parse.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/base64_url.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/base64_url.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/mem_utils.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/mem_utils.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/str_utils.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_utils/str_utils.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_flash_region_mgr.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_flash_region_mgr.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_log_eraser.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_log_eraser.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_log_msg.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_log_platform_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_log_reader.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_log_reader.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_logger_config.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_logger_config.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_logger_hook.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_logger_if.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_logger_impl.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_logger_impl.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_logger_internal_config.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_mempool_mgr.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_mempool_mgr.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/log_buffer.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/log_buffer.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/log_request.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/log_request.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/log_request_queue.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/log_request_queue.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/logger_port.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/debug/asd_crashdump.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/debug/asd_crashdump.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/debug/asd_debug.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/heap/heap_4_ext.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/heap/heap_4_wrap.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/heap/heap_4_wrap.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/include/acorn_defines.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/include/common_macros.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/mbedtls/threading_alt.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/asd_reboot_manager.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/asd_reboot_manager.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/asd_reset_platform.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/asd_reset_platform.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/time_utils.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/time_utils.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/uart_console.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/warm_boot_storage_iface.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/afw_reset_platform.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/board_hal.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/internal/internal_battery.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/internal/internal_tsensor.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_adc.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_battery.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_board_gpio.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_efuse.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_flash.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_gpio.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_hw.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_i2c.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_i2s.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_perfcounter.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_power.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_pwm.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_reset.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_rtc.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_spi.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_timer.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_tsensor.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_uart.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_usb_device.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/include/iot_watchdog.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_beacon_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_beacon_clients.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_beacon_defines.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_ble_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_ble_defines.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_ble_gatt_server_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_common_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_defines.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_log.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceBT_session_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/aceCli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_cli_cmds.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_cli_cmds_config.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_config.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_conn_mgr.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_log.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_log_bufferutil.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_main.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_modules.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_status.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_sys_stats.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_user_config.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ace_wifi_svc.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/acelog_tests.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_beacon_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_beacon_clients.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_beacon_defines.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_ble_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_ble_defines.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_ble_gatt_client_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_ble_gatt_server_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_common_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_defines.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_log.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bluetooth_session_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_avrc_ctrl_profile.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_avrcp.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_avsnk_profile.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_avsrc_profile.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_gatt_client.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_gatt_server.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_gatt_types.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_hfp.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_hid_device_profile.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_hid_host_profile.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_manager.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_manager_adapter_ble.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_manager_adapter_classic.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_manager_types.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/bt_hal_sock.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/dispatcher_core.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/dispatcher_work_builder.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/eventmgr_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/eventmgr_events.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/eventmgr_types.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/factory_reset_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/ffs_provisionable_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/hal_device_info.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/hal_dha.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/hal_fr.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/hal_kv_storage.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/hal_log.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/hal_log_bufferutil.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/hal_wifi.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/hsm.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/map_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/maplite_cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/maplite_db_keys.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/maplite_svc_api.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/os_specific.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_alloc.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_atomic.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_common.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_ip_mutex.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_mp.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_mq.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_mutex.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_rand.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_semaphore.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_shmem.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_shmem_cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_test_config.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_threads.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/osal_time.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/queue.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/unity.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/unity_internals.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/utarray.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/uthash.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/utlist.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/utringbuffer.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/utstack.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/utstring.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/version.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/wifi_mgr.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/wifi_mgr_err.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/wifi_mgr_legacy.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/wifi_mgr_tests.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/wifi_mgr_utils.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/wifi_svc.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/arpa/inet.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/cJSON/cJSON.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/abstract/abstract.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/abstract/protocols.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/abstract/protocols/smtp.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/abstract/transports.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/abstract/transports/raw-skt.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/abstract/transports/unit-test.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/libwebsockets.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-adopt.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-async-dns.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-bb-i2c.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-bb-spi.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-button.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-callbacks.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-cgi.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-client.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-context-vhost.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-dbus.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-detailed-latency.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-diskcache.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-display.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-dll2.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-dsh.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-eventlib-exports.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-freertos.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-fts.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-genaes.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-gencrypto.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-genec.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-genhash.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-genrsa.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-gpio.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-http.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-i2c.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-ili9341-spi.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-jose.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-jwe.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-jwk.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-jws.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-led.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-lejp.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-logs.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-lwsac.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-misc.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-mqtt.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-netdev.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-network-helper.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-optee.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-protocols-plugins.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-purify.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-pwm.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-retry.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-ring.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-secure-streams-client.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-secure-streams-policy.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-secure-streams.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-sequencer.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-service.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-settings.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-sha1-base64.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-smd.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-spa.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-spi.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-ssd1306-i2c.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-state.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-stats.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-struct.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-system.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-test-sequencer.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-threadpool.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-timeout-timer.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-tokenize.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-vfs.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-write.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-writeable.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-ws-close.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-ws-ext.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-ws-state.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws-x509.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/libwebsockets/lws_config.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/nanopb/pb.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/nanopb/pb_common.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/nanopb/pb_decode.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/nanopb/pb_encode.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/sys/socket.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/toolchain/toolchain.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/toolchain/toolchain_clang.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/toolchain/toolchain_gcc.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/ace_threading_alt.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/afw_platform_reset.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_device_info_setup.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_device_info_setup.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_gpio.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_iot_flash.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_iot_hw.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_iot_log.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_iot_rtc.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_iot_timer.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_perfcounter.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_platform_key.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_reset.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/rt106a_wifi_hal.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/external/ceedling/ceedling_upstream/vendor/unity/src/unity.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/unity.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/ace/sdk/include/ace/unity_internals.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/Unity/extras/fixture/src/unity_fixture.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/Unity/extras/fixture/src/unity_fixture.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/Unity/extras/fixture/src/unity_fixture_internals.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/Unity/extras/fixture/src/unity_fixture_malloc_overrides.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/cli/inc/ace_cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/cli/inc/acehal_device_info_cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/ace_hal/cli/src/acehal_device_info_cli.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/inc/afw_cli_utils.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/afw/common/src/afw_cli_utils.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_cli/asd_cli.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_cli/asd_cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_system_tools/asd_debug_cli.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd/asd_system_tools/asd_debug_cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_logger_cli.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/asd_logger/asd_logger_cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/time_utils_cli.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/common/utilities/time_utils_cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/hal_impl/test_iot_config.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/test/iot_tests/test_iot_cli.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/test/iot_tests/test_iot_cli.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/test/iot_tests/test_iot_main.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/test/iot_tests/test_iot_main.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/test/iot_tests/test_iot_usb_host.c"
"${ProjDirPath}/../../../../../rtos/freertos/libraries/abstractions/common_io/test/test_iot_internal.h"
"${ProjDirPath}/../../../../../rtos/freertos/tests/include/aws_test_runner.h"
"${ProjDirPath}/../../../../../rtos/freertos/tests/include/aws_test_utils.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_clock.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_clock.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/MIMXRT106A.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/MIMXRT106A_features.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/fsl_device_registers.h"
"${ProjDirPath}/../../../../../components/uart/lpuart_adapter.c"
"${ProjDirPath}/../../../../../components/uart/uart.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_uart.c"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_uart.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_lpuart.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_lpuart.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/gcc/startup_MIMXRT106A.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/system_MIMXRT106A.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/system_MIMXRT106A.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_iomuxc.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities/fsl_assert.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_gpio.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_gpio.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/xip/fsl_flexspi_nor_boot.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/xip/fsl_flexspi_nor_boot.h"
"${ProjDirPath}/../../../xip/sln_alexa_iot_flexspi_nor_config.c"
"${ProjDirPath}/../../../xip/sln_alexa_iot_flexspi_nor_config.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_dcp.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_dcp.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_trng.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_trng.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_flexram_allocate.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_flexram_allocate.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_flexram.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_flexram.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_flexspi.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_flexspi.h"
"${ProjDirPath}/../../../../../CMSIS/Include/core_cm7.h"
"${ProjDirPath}/../../../../../CMSIS/Include/mpu_armv7.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armcc.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armclang.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armclang_ltm.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_compiler.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_gcc.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_iccarm.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_version.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_common_tables.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_const_structs.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_math.h"
"${ProjDirPath}/../../../../../middleware/usb/output/source/device/class/usb_device_cdc_acm.c"
"${ProjDirPath}/../../../../../middleware/usb/output/source/device/class/usb_device_cdc_acm.h"
"${ProjDirPath}/../../../../../middleware/usb/output/source/device/class/usb_device_class.c"
"${ProjDirPath}/../../../../../middleware/usb/output/source/device/class/usb_device_class.h"
"${ProjDirPath}/../../../../../middleware/usb/output/source/device/usb_device_ch9.c"
"${ProjDirPath}/../../../../../middleware/usb/output/source/device/usb_device_ch9.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/bt_app_inc/wiced_bt_ble.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/bt_app_inc/wiced_bt_cfg.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/bt_app_inc/wiced_bt_dev.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/bt_app_inc/wiced_bt_gatt.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/bt_app_inc/wiced_bt_stack.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/bt_app_inc/wiced_bt_types.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Components/stack/include/bt_types.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Components/stack/include/dyn_mem.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Components/stack/include/gattdefs.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Components/stack/include/hcidefs.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Components/stack/include/hcimsgs.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Components/stack/include/hiddefs.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Components/stack/include/l2cdefs.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Components/stack/include/sdpdefs.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Projects/bte/main/bt_target.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Projects/bte/main/bt_trace.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/Projects/bte/main/gki_target.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/WICED/data_types.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/WICED/wiced_bt_int.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/buildcfg.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/platform_bluetooth.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/platform_bluetooth.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/platform_imxrt.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/platform_imxrt.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/rtos.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/wiced_bluetooth_result.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/wiced_bt_sco.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/wiced_bt_uuid.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/wiced_result.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/wiced_rtos.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/wiced_rtos.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/wiced_time.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/imxrt_port/wiced_utilities.h"
"${ProjDirPath}/../../../../../rtos/freertos/freertos_kernel/include/freertos_tasks_c_additions.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W/4343WA1.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W/4343WA1_clm.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W/4343WA1_clm_mfg.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W/4343WA1_mfg.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W/chip_constants.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W/resources.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W/resources.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W/wwd_ap.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/chips/4343W/wwd_chip_specific_functions.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/RTOS/FreeRTOS/WWD/wwd_FreeRTOS_systick.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/RTOS/FreeRTOS/WWD/wwd_rtos.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/RTOS/FreeRTOS/WWD/wwd_rtos.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/RTOS/wwd_rtos_interface.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/network/wwd_buffer_interface.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/network/wwd_network_constants.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/network/wwd_network_interface.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/platform/wwd_bus_interface.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/platform/wwd_platform_interface.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/platform/wwd_resource_interface.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/platform/wwd_sdio_interface.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/platform/wwd_spi_interface.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_assert.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_constants.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_debug.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_eapol.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_events.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_management.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_poll.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_structures.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_wifi.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_wifi_sleep.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/include/wwd_wlioctl.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/bus_protocols/SDIO/wwd_bus_protocol.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/bus_protocols/SDIO/wwd_bus_protocol.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/bus_protocols/wwd_bus_common.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/bus_protocols/wwd_bus_protocol_interface.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/tlv.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/tlv.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_ap.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_ap_common.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_ap_common.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_bcmendian.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_clm.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_clm.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_debug.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_eapol.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_internal.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_internal.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_logging.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_management.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_rtos_interface.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_sdpcm.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_sdpcm.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_thread.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_thread.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_thread_internal.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_thread_internal.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_wifi.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_wifi_chip_common.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_wifi_chip_common.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/internal/wwd_wifi_sleep.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/wwd.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/WWD/wwd_wiced.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/internal/wifi.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/network/LwIP/WWD/wwd_buffer.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/network/LwIP/WWD/wwd_buffer.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/network/LwIP/WWD/wwd_network.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/network/LwIP/WWD/wwd_network.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/MCU/LPC/WWD/wwd_SDIO.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/MCU/LPC/WWD/wwd_platform.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/MCU/LPC/platform_mcu_peripheral.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/MCU/wwd_platform_common.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/MCU/wwd_platform_separate_mcu.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/MCU/wwd_resources.c"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/include/platform_cache_def.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/include/platform_peripheral.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/WICED/platform/platform_toolchain.h"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/generated_mac_address.txt"
"${ProjDirPath}/../../../../../middleware/wiced/43xxx_Wi-Fi/include/wiced_resource.h"
"${ProjDirPath}/../../../../../middleware/usb/include/usb.h"
"${ProjDirPath}/../../../../../middleware/usb/include/usb_misc.h"
"${ProjDirPath}/../../../../../middleware/usb/include/usb_spec.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_dci.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_lpi2c.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_lpi2c.h"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/security/sln_encrypt.c"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/security/sln_encrypt.h"
"${ProjDirPath}/../../../../../middleware/sln_iot_common_platform/boot_code/common/fica_definition.h"
"${ProjDirPath}/../../../../../middleware/sdmmc/osa/fsl_sdmmc_osa.c"
"${ProjDirPath}/../../../../../middleware/sdmmc/osa/fsl_sdmmc_osa.h"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction.h"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction_config.h"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction_free_rtos.c"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction_free_rtos.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_usdhc.c"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/drivers/fsl_usdhc.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/py_crc/crc16.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/py_crc/crc16.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/py_crc/crc8.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/py_crc/crc8.h"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/py_crc/crc_mpeg.c"
"${ProjDirPath}/../../../../../middleware/amazon_acs/dpk_impl/rt106a/external/py_crc/crc_mpeg.h"
"${ProjDirPath}/../../../../../devices/MIMXRT106A/utilities/fsl_sbrk.c"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/acs_test_runner.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/acs_test_runner.ld -static")

TARGET_LINK_LIBRARIES(acs_test_runner.elf -Wl,--start-group)
target_link_libraries(acs_test_runner.elf debug m)

target_link_libraries(acs_test_runner.elf debug c)

target_link_libraries(acs_test_runner.elf debug gcc)

target_link_libraries(acs_test_runner.elf debug nosys)

target_link_libraries(acs_test_runner.elf optimized m)

target_link_libraries(acs_test_runner.elf optimized c)

target_link_libraries(acs_test_runner.elf optimized gcc)

target_link_libraries(acs_test_runner.elf optimized nosys)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_autogen.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_bt.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_connectivity_manager.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_dispatcher.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_dispatcher_demo_hello_world_app.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_eventmgr.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_eventmgr2.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ffs.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_fr.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hsm.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_log.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_map.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_osal.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_sys_toolbox.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_tlscfg.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_utils_linkedlist.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_wifimgr.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libcjson2.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libdispatcher_demo_direct_server_app.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libffs_ble_provisionable_sdk.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libnanopb.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libwebsockets.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libwifisvc.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_eventmgr_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_eventmgr_demo.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_eventmgr_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_ffs_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_osal_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_acehal_device_info_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_acehal_kv_storage_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_acehal_wifi_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_IpMutex_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_alloc_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_message_queue_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_mp_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_mutex_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_rand_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_semaphore_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_shmem_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_shmem_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_thread_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_time_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_acm_cli_test.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_att_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_bt_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_device_info.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_device_register_map.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_dispatcher.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_dispatcher_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_factory_reset.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ffs_ut.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_halWifi.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hal_bt_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hal_dha_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hal_factoryreset_test.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hal_log_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_integration_test_wrapper.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_kv_storage_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_log_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_osal_test_config.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_sys_toolbox.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_wifi.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libacehal_dha_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libacelog_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE)

target_link_libraries(acs_test_runner.elf debug ${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/libwicedble.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_autogen.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_bt.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_connectivity_manager.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_dispatcher.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_dispatcher_demo_hello_world_app.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_eventmgr.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_eventmgr2.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ffs.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_fr.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hsm.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_log.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_map.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_osal.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_sys_toolbox.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_tlscfg.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_utils_linkedlist.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_wifimgr.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libcjson2.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libdispatcher_demo_direct_server_app.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libffs_ble_provisionable_sdk.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libnanopb.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libwebsockets.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libwifisvc.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_eventmgr_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_eventmgr_demo.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_eventmgr_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_ffs_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ace_osal_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_acehal_device_info_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_acehal_kv_storage_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_acehal_wifi_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_IpMutex_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_alloc_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_message_queue_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_mp_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_mutex_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_rand_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_semaphore_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_shmem_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_shmem_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_thread_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_aceosal_time_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_acm_cli_test.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_att_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_bt_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_device_info.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_device_register_map.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_dispatcher.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_dispatcher_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_factory_reset.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_ffs_ut.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_halWifi.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hal_bt_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hal_dha_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hal_factoryreset_test.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_hal_log_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_integration_test_wrapper.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_kv_storage_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_log_cli.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_osal_test_config.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_sys_toolbox.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libace_wifi.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libacehal_dha_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/amazon_acs/libs)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/amazon_acs/libs/libacelog_tests.a)

link_directories(${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE)

target_link_libraries(acs_test_runner.elf optimized ${ProjDirPath}/../../../../../middleware/wiced/43xxx_BLE/wiced_bt/BTE/libwicedble.a)

TARGET_LINK_LIBRARIES(acs_test_runner.elf -Wl,--end-group)


