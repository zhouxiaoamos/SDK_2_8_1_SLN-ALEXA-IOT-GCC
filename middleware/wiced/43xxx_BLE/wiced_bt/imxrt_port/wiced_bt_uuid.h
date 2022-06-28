/*
 *Copyright 2018, Cypress Semiconductor Corporation or a subsidiary of
 * Cypress Semiconductor Corporation. All Rights Reserved.
 *
 * This software, associated documentation and materials ("Software"),
 * is owned by Cypress Semiconductor Corporation
 * or one of its subsidiaries ("Cypress") and is protected by and subject to
 * worldwide patent protection (United States and foreign),
 * United States copyright laws and international treaty provisions.
 * Therefore, you may use this Software only as provided in the license
 * agreement accompanying the software package from which you
 * obtained this Software ("EULA").
 * If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 * non-transferable license to copy, modify, and compile the Software
 * source code solely for use in connection with Cypress's
 * integrated circuit products. Any reproduction, modification, translation,
 * compilation, or representation of this Software except as specified
 * above is prohibited without the express written permission of Cypress.
 *
 * Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 * reserves the right to make changes to the Software without notice. Cypress
 * does not assume any liability arising out of the application or use of the
 * Software or any product or circuit described in the Software. Cypress does
 * not authorize its products for use in any products where a malfunction or
 * failure of the Cypress product may reasonably be expected to result in
 * significant property damage, injury or death ("High Risk Product"). By
 * including Cypress's product in a High Risk Product, the manufacturer
 * of such system or application assumes all risk of such use and in doing
 * so agrees to indemnify Cypress against all liability.
 */

/** @file
 *
 * This file has the BT UUIDs (https://developer.bluetooth.org/gatt/)
 *
 */

#ifndef WICED_BT_UUID_H
#define WICED_BT_UUID_H

/******************************************************
 *                   Enumerations
 ******************************************************/

enum ble_uuid_service
{
    UUID_SERVICE_GAP                                    = 0x1800,
    UUID_SERVICE_GATT                                   = 0x1801,
    UUID_SERVICE_IMMEDIATE_ALERT                        = 0x1802,
    UUID_SERVICE_LINK_LOSS                              = 0x1803,
    UUID_SERVICE_TX_POWER                               = 0x1804,
    UUID_SERVICE_CURRENT_TIME                           = 0x1805,
    UUID_SERVICE_REFERENCE_TIME_UPDATE                  = 0x1806,
    UUID_SERVICE_DST_CHANGE                             = 0x1807,
    UUID_SERVICE_GLUCOSE                                = 0x1808,
    UUID_SERVICE_HEALTH_THERMOMETER                     = 0x1809,
    UUID_SERVICE_DEVICE_INFORMATION                     = 0x180A,
    UUID_SERVICE_NETWORK_AVAILABILITY                   = 0x180B,
    UUID_SERVICE_WATCHDOG                               = 0x180C,
    UUID_SERVICE_HEART_RATE                             = 0x180D,
    UUID_SERVICE_PHONE_ALERT_STATUS                     = 0x180E,
    UUID_SERVICE_BATTERY                                = 0x180F,
    UUID_SERVICE_BLOOD_PRESSURE                         = 0x1810,
    UUID_SERVICE_ALERT_NOTIFICATION                     = 0x1811,
    UUID_SERVICE_HID                                    = 0x1812,
    UUID_SERVICE_SCAN_PARAMETERS                        = 0x1813,
    UUID_SERVICE_RSC                                    = 0x1814,
    UUID_SERVICE_AUTOMATION_IO                          = 0x1815,
    UUID_SERVICE_CSC                                    = 0x1816,
    UUID_SERVICE_CYCLING_POWER                          = 0x1818,
    UUID_SERVICE_LOCATION_NAVIGATION                    = 0x1819,
    UUID_SERVICE_ENVIRONMENTAL_SENSING                  = 0x181A,
    UUID_SERVICE_BODY_COMPOSITION                       = 0x181B,
    UUID_SERVICE_USER_DATA                              = 0x181C,
    UUID_SERVICE_WEIGHT_SCALE                           = 0x181D,
    UUID_SERVICE_BOND_MANAGEMENT                        = 0x181E,
    UUID_SERVICE_CONTINUOUS_GLUCOSE_MONITORING          = 0x181F,
    UUID_SERVICE_INTERNET_PROTOCOL_SUPPORT              = 0x1820,
    UUID_SERVICE_INDOOR_POSITIONING                     = 0x1821,
    UUID_SERVICE_PULSE_OXIMETER                         = 0x1822,
    UUID_SERVICE_HTTP_PROXY                             = 0x1823,
};


enum ble_uuid_attribute
{
    UUID_ATTRIBUTE_PRIMARY_SERVICE                      = 0x2800,
    UUID_ATTRIBUTE_SECONDARY_SERVICE                    = 0x2801,
    UUID_ATTRIBUTE_INCLUDE                              = 0x2802,
    UUID_ATTRIBUTE_CHARACTERISTIC                       = 0x2803,
};


enum ble_uuid_characteristic_descriptor
{
    UUID_DESCRIPTOR_CHARACTERISTIC_EXTENDED_PROPERTIES  = 0x2900,
    UUID_DESCRIPTOR_CHARACTERISTIC_USER_DESCRIPTION     = 0x2901,
    UUID_DESCRIPTOR_CLIENT_CHARACTERISTIC_CONFIGURATION = 0x2902,
    UUID_DESCRIPTOR_SERVER_CHARACTERISTIC_CONFIGURATION = 0x2903,
    UUID_DESCRIPTOR_CHARACTERISTIC_PRESENTATION_FORMAT  = 0x2904,
    UUID_DESCRIPTOR_CHARACTERISTIC_AGGREGATE_FORMAT     = 0x2905,
    UUID_DESCRIPTOR_VALID_RANGE                         = 0x2906,
    UUID_DESCRIPTOR_EXTERNAL_REPORT_REFERENCE           = 0x2907,
    UUID_DESCRIPTOR_REPORT_REFERENCE                    = 0x2908,
    UUID_DESCRIPTOR_NUMBER_OF_DIGITALS                  = 0x2909,
    UUID_DESCRIPTOR_VALUE_TRIGGER_SETTING               = 0x290A,
    UUID_DESCRIPTOR_ENVIRONMENT_SENSING_CONFIGURATION   = 0x290B,
    UUID_DESCRIPTOR_ENVIRONMENT_SENSING_MEASUREMENT     = 0x290C,
    UUID_DESCRIPTOR_ENVIRONMENT_SENSING_TRIGGER_SETTING = 0x290D,
    UUID_DESCRIPTOR_TIME_TRIGGER_SETTING                = 0x290E,
};


enum ble_uuid_characteristic
{
    UUID_CHARACTERISTIC_DEVICE_NAME                                         = 0x2A00,
    UUID_CHARACTERISTIC_APPEARANCE                                          = 0x2A01,
    UUID_CHARACTERISTIC_PERIPHERAL_PRIVACY_FLAG                             = 0x2A02,
    UUID_CHARACTERISTIC_RECONNECTION_ADDRESS                                = 0x2A03,
    UUID_CHARACTERISTIC_PERIPHERAL_PREFERRED_CONNECTION_PARAMETERS          = 0x2A04,
    UUID_CHARACTERISTIC_SERVICE_CHANGED                                     = 0x2A05,
    UUID_CHARACTERISTIC_ALERT_LEVEL                                         = 0x2A06,
    UUID_CHARACTERISTIC_TX_POWER_LEVEL                                      = 0x2A07,
    UUID_CHARACTERISTIC_DATE_TIME                                           = 0x2A08,
    UUID_CHARACTERISTIC_DAY_OF_WEEK                                         = 0x2A09,
    UUID_CHARACTERISTIC_TIME                                                = 0x2A0A,
    UUID_CHARACTERISTIC_EXACT_TIME_100                                      = 0x2A0B,
    UUID_CHARACTERISTIC_EXACT_TIME_256                                      = 0x2A0C,
    UUID_CHARACTERISTIC_DAYLIGHT_SAVING_TIME                                = 0x2A0D,
    UUID_CHARACTERISTIC_TIME_ZONE                                           = 0x2A0E,
    UUID_CHARACTERISTIC_LOCAL_TIME_INFORMATION                              = 0x2A0F,
    UUID_CHARACTERISTIC_SECONDARY_TIME_ZONE                                 = 0x2A10,
    UUID_CHARACTERISTIC_TIME_WITH_DST                                       = 0x2A11,
    UUID_CHARACTERISTIC_TIME_ACCURACY                                       = 0x2A12,
    UUID_CHARACTERISTIC_TIME_SOURCE                                         = 0x2A13,
    UUID_CHARACTERISTIC_REFERENCE_TIME_INFORMATION                          = 0x2A14,
    UUID_CHARACTERISTIC_TIME_BROADCAST                                      = 0x2A15,
    UUID_CHARACTERISTIC_TIME_UPDATE_CONTROL_POINT                           = 0x2A16,
    UUID_CHARACTERISTIC_TIME_UPDATE_STATE                                   = 0x2A17,
    UUID_CHARACTERISTIC_GLUCOSE_MEASUREMENT                                 = 0x2A18,
    UUID_CHARACTERISTIC_BATTERY_LEVEL                                       = 0x2A19,
    UUID_CHARACTERISTIC_BATTERY_POWER_STATE                                 = 0x2A1A,
    UUID_CHARACTERISTIC_BATTERY_LEVEL_STATE                                 = 0x2A1B,
    UUID_CHARACTERISTIC_TEMPERATURE_MEASUREMENT                             = 0x2A1C,
    UUID_CHARACTERISTIC_TEMPERATURE_TYPE                                    = 0x2A1D,
    UUID_CHARACTERISTIC_INTERMEDIATE_TEMPERATURE                            = 0x2A1E,
    UUID_CHARACTERISTIC_TEMPERATURE_CELSIUS                                 = 0x2A1F,
    UUID_CHARACTERISTIC_TEMPERATURE_FAHRENHEIT                              = 0x2A20,
    UUID_CHARACTERISTIC_MEASUREMENT_INTERVAL                                = 0x2A21,
    UUID_CHARACTERISTIC_BOOT_KEYBOARD_INPUT_REPORT                          = 0x2A22,
    UUID_CHARACTERISTIC_SYSTEM_ID                                           = 0x2A23,
    UUID_CHARACTERISTIC_MODEL_NUMBER_STRING                                 = 0x2A24,
    UUID_CHARACTERISTIC_SERIAL_NUMBER_STRING                                = 0x2A25,
    UUID_CHARACTERISTIC_FIRMWARE_REVISION_STRING                            = 0x2A26,
    UUID_CHARACTERISTIC_HARDWARE_REVISION_STRING                            = 0x2A27,
    UUID_CHARACTERISTIC_SOFTWARE_REVISION_STRING                            = 0x2A28,
    UUID_CHARACTERISTIC_MANUFACTURER_NAME_STRING                            = 0x2A29,
    UUID_CHARACTERISTIC_IEEE_11073_20601_REGULATORY_CERTIFICATION_DATA_LIST = 0x2A2A,
    UUID_CHARACTERISTIC_CURRENT_TIME                                        = 0x2A2B,
    UUID_CHARACTERISTIC_MAGNETIC_DECLINATION                                = 0x2A2C,
    UUID_CHARACTERISTIC_SCAN_REFRESH                                        = 0x2A31,
    UUID_CHARACTERISTIC_BOOT_KEYBOARD_OUTPUT_REPORT                         = 0x2A32,
    UUID_CHARACTERISTIC_BOOT_MOUSE_INPUT_REPORT                             = 0x2A33,
    UUID_CHARACTERISTIC_GLUCOSE_MEASUREMENT_CONTEXT                         = 0x2A34,
    UUID_CHARACTERISTIC_BLOOD_PRESSURE_MEASUREMENT                          = 0x2A35,
    UUID_CHARACTERISTIC_INTERMEDIATE_BLOOD_PRESSURE                         = 0x2A36,
    UUID_CHARACTERISTIC_HEART_RATE_MEASUREMENT                              = 0x2A37,
    UUID_CHARACTERISTIC_HEART_RATE_SENSOR_LOCATION                          = 0x2A38,
    UUID_CHARACTERISTIC_HEART_RATE_CONTROL_POINT                            = 0x2A39,
    UUID_CHARACTERISTIC_REMOVABLE                                           = 0x2A3A,
    UUID_CHARACTERISTIC_SERVICE_REQUIRED                                    = 0x2A3B,
    UUID_CHARACTERISTIC_SCIENTIFIC_TEMPERATURE_CELSIUS                      = 0x2A3C,
    UUID_CHARACTERISTIC_STRING                                              = 0x2A3D,
    UUID_CHARACTERISTIC_NETWORK_AVAILABILITY                                = 0x2A3E,
    UUID_CHARACTERISTIC_ALERT_STATUS                                        = 0x2A3F,
    UUID_CHARACTERISTIC_RINGER_CONTROL_POINT                                = 0x2A40,
    UUID_CHARACTERISTIC_RINGER_SETTING                                      = 0x2A41,
    UUID_CHARACTERISTIC_ALERT_CATEGORY_ID_BIT_MASK                          = 0x2A42,
    UUID_CHARACTERISTIC_ALERT_CATEGORY_ID                                   = 0x2A43,
    UUID_CHARACTERISTIC_ALERT_NOTIFICATION_CONTROL_POINT                    = 0x2A44,
    UUID_CHARACTERISTIC_UNREAD_ALERT_STATUS                                 = 0x2A45,
    UUID_CHARACTERISTIC_NEW_ALERT                                           = 0x2A46,
    UUID_CHARACTERISTIC_SUPPORTED_NEW_ALERT_CATEGORY                        = 0x2A47,
    UUID_CHARACTERISTIC_SUPPORTED_UNREAD_ALERT_CATEGORY                     = 0x2A48,
    UUID_CHARACTERISTIC_BLOOD_PRESSURE_FEATURE                              = 0x2A49,
    UUID_CHARACTERISTIC_HID_INFORMATION                                     = 0x2A4A,
    UUID_CHARACTERISTIC_HID_REPORT_MAP                                      = 0x2A4B,
    UUID_CHARACTERISTIC_REPORT_MAP                                          = 0x2A4B,
    UUID_CHARACTERISTIC_HID_CONTROL_POINT                                   = 0x2A4C,
    UUID_CHARACTERISTIC_HID_REPORT                                          = 0x2A4D,
    UUID_CHARACTERISTIC_REPORT                                              = 0x2A4D,
    UUID_CHARACTERISTIC_HID_PROTOCOL_MODE                                   = 0x2A4E,
    UUID_CHARACTERISTIC_PROTOCOL_MODE                                       = 0x2A4E,
    UUID_CHARACTERISTIC_SCAN_INTERVAL_WINDOW                                = 0x2A4F,
    UUID_CHARACTERISTIC_PNP_ID                                              = 0x2A50,
    UUID_CHARACTERISTIC_GLUCOSE_FEATURES                                    = 0x2A51,
    UUID_CHARACTERISTIC_GLUCOSE_RACP                                        = 0x2A52,
    UUID_CHARACTERISTIC_RECORD_ACCESS_CONTROL_POINT                         = 0x2A52,
    UUID_CHARACTERISTIC_RSC_MEASUREMENT                                     = 0x2A53,
    UUID_CHARACTERISTIC_RSC_FEATURE                                         = 0x2A54,
    UUID_CHARACTERISTIC_SC_CONTROL_POINT                                    = 0x2A55,
    UUID_CHARACTERISTIC_RSC_CONTROL_POINT                                   = 0x2A55,
    UUID_CHARACTERISTIC_CSC_CONTROL_POINT                                   = 0x2A55,
    UUID_CHARACTERISTIC_DIGITAL                                             = 0x2A56,
    UUID_CHARACTERISTIC_ANALOG                                              = 0x2A58,
    UUID_CHARACTERISTIC_AGGREGATE_INPUT                                     = 0x2A5A,
    UUID_CHARACTERISTIC_CSC_MEASUREMENT                                     = 0x2A5B,
    UUID_CHARACTERISTIC_CSC_FEATURE                                         = 0x2A5C,
    UUID_CHARACTERISTIC_SENSOR_LOCATION                                     = 0x2A5D,
    UUID_CHARACTERISTIC_PLX_SPOT_CHECK_MEASUREMENT                          = 0x2A5E,
    UUID_CHARACTERISTIC_PLX_CONTINUOUS_MEASUREMENT                          = 0x2A5F,
    UUID_CHARACTERISTIC_PLX_FEATURES                                        = 0x2A60,
    UUID_CHARACTERISTIC_CYCLING_POWER_MEASUREMENT                           = 0x2A63,
    UUID_CHARACTERISTIC_CYCLING_POWER_VECTOR                                = 0x2A64,
    UUID_CHARACTERISTIC_CYCLING_POWER_FEATURE                               = 0x2A65,
    UUID_CHARACTERISTIC_CYCLING_POWER_CONTROL_POINT                         = 0x2A66,
    UUID_CHARACTERISTIC_LOCATION_AND_SPEED                                  = 0x2A67,
    UUID_CHARACTERISTIC_NAVIGATION                                          = 0x2A68,
    UUID_CHARACTERISTIC_POSITION_QUALITY                                    = 0x2A69,
    UUID_CHARACTERISTIC_LN_FEATURE                                          = 0x2A6A,
    UUID_CHARACTERISTIC_LN_CONTROL_POINT                                    = 0x2A6B,
    UUID_CHARACTERISTIC_ELEVATION                                           = 0x2A6C,
    UUID_CHARACTERISTIC_PRESSURE                                            = 0x2A6D,
    UUID_CHARACTERISTIC_TEMPERATURE                                         = 0x2A6E,
    UUID_CHARACTERISTIC_HUMIDITY                                            = 0x2A6F,
    UUID_CHARACTERISTIC_TRUE_WIND_SPEED                                     = 0x2A70,
    UUID_CHARACTERISTIC_TRUE_WIND_DIRECTION                                 = 0x2A71,
    UUID_CHARACTERISTIC_APPARENT_WIND_SPEED                                 = 0x2A72,
    UUID_CHARACTERISTIC_APPARENT_WIND_DIRECTION                             = 0x2A73,
    UUID_CHARACTERISTIC_GUST_FACTOR                                         = 0x2A74,
    UUID_CHARACTERISTIC_POLLEN_CONCENTRATION                                = 0x2A75,
    UUID_CHARACTERISTIC_UV_INDEX                                            = 0x2A76,
    UUID_CHARACTERISTIC_IRRADIANCE                                          = 0x2A77,
    UUID_CHARACTERISTIC_RAINFALL                                            = 0x2A78,
    UUID_CHARACTERISTIC_WIND_CHILL                                          = 0x2A79,
    UUID_CHARACTERISTIC_HEAT_INDEX                                          = 0x2A7A,
    UUID_CHARACTERISTIC_DEW_POINT                                           = 0x2A7B,
    UUID_CHARACTERISTIC_DESCRIPTOR_VALUE_CHANGED                            = 0x2A7D,
    UUID_CHARACTERISTIC_AEROBIC_HEART_RATE_LOWER_LIMIT                      = 0x2A7E,
    UUID_CHARACTERISTIC_AEROBIC_THRESHOLD                                   = 0x2A7F,
    UUID_CHARACTERISTIC_AGE                                                 = 0x2A80,
    UUID_CHARACTERISTIC_ANAEROBIC_HEART_RATE_LOWER_LIMIT                    = 0x2A81,
    UUID_CHARACTERISTIC_ANAEROBIC_HEART_RATE_UPPER_LIMIT                    = 0x2A82,
    UUID_CHARACTERISTIC_ANAEROBIC_THRESHOLD                                 = 0x2A83,
    UUID_CHARACTERISTIC_AEROBIC_HEART_RATE_UPPER_LIMIT                      = 0x2A84,
    UUID_CHARACTERISTIC_DATE_OF_BIRTH                                       = 0x2A85,
    UUID_CHARACTERISTIC_DATE_OF_THRESHOLD_ASSESSMENT                        = 0x2A86,
    UUID_CHARACTERISTIC_EMAIL_ADDRESS                                       = 0x2A87,
    UUID_CHARACTERISTIC_FAT_BURN_HEART_RATE_LOWER_LIMIT                     = 0x2A88,
    UUID_CHARACTERISTIC_FAT_BURN_HEART_RATE_UPPER_LIMIT                     = 0x2A89,
    UUID_CHARACTERISTIC_FIRST_NAME                                          = 0x2A8A,
    UUID_CHARACTERISTIC_FIVE_ZONE_HEART_RATE_LIMITS                         = 0x2A8B,
    UUID_CHARACTERISTIC_GENDER                                              = 0x2A8C,
    UUID_CHARACTERISTIC_HEART_RATE_MAX                                      = 0x2A8D,
    UUID_CHARACTERISTIC_HEIGHT                                              = 0x2A8E,
    UUID_CHARACTERISTIC_HIP_CIRCUMFERENCE                                   = 0x2A8F,
    UUID_CHARACTERISTIC_LAST_NAME                                           = 0x2A90,
    UUID_CHARACTERISTIC_MAXIMUM_RECOMMENDED_HEART_RATE                      = 0x2A91,
    UUID_CHARACTERISTIC_RESTING_HEART_RATE                                  = 0x2A92,
    UUID_CHARACTERISTIC_SPORT_TYPE_FOR_AEROBIC_AND_ANAEROBIC_THRESHOLDS     = 0x2A93,
    UUID_CHARACTERISTIC_THREE_ZONE_HEART_RATE_LIMITS                        = 0x2A94,
    UUID_CHARACTERISTIC_TWO_ZONE_HEART_RATE_LIMITS                          = 0x2A95,
    UUID_CHARACTERISTIC_VO2_MAX                                             = 0x2A96,
    UUID_CHARACTERISTIC_WAIST_CIRCUMFERENCE                                 = 0x2A97,
    UUID_CHARACTERISTIC_WEIGHT                                              = 0x2A98,
    UUID_CHARACTERISTIC_DATABASE_CHANGE_INCREMENT                           = 0x2A99,
    UUID_CHARACTERISTIC_USER_INDEX                                          = 0x2A9A,
    UUID_CHARACTERISTIC_BODY_COMPOSITION_FEATURE                            = 0x2A9B,
    UUID_CHARACTERISTIC_BODY_COMPOSITION_MEASUREMENT                        = 0x2A9C,
    UUID_CHARACTERISTIC_WEIGHT_MEASUREMENT                                  = 0x2A9D,
    UUID_CHARACTERISTIC_WEIGHT_SCALE_FEATURE                                = 0x2A9E,
    UUID_CHARACTERISTIC_USER_CONTROL_POINT                                  = 0x2A9F,
    UUID_CHARACTERISTIC_MAGNETIC_FLUX_DENSITY_2D                            = 0x2AA0,
    UUID_CHARACTERISTIC_MAGNETIC_FLUX_DENSITY_3D                            = 0x2AA1,
    UUID_CHARACTERISTIC_LANGUAGE                                            = 0x2AA2,
    UUID_CHARACTERISTIC_BAROMETRIC_PRESSURE_TREND                           = 0x2AA3,
    UUID_CHARACTERISTIC_BOND_MANAGEMENT_CONTROL_POINT                       = 0x2AA4,
    UUID_CHARACTERISTIC_BOND_MANAGEMENT_FEATURE                             = 0x2AA5,
    UUID_CHARACTERISTIC_CENTRAL_ADDRESS_RESOLUTION                          = 0x2AA6,
    UUID_CHARACTERISTIC_CGM_MEASUREMENT                                     = 0x2AA7,
    UUID_CHARACTERISTIC_CGM_FEATURE                                         = 0x2AA8,
    UUID_CHARACTERISTIC_CGM_STATUS                                          = 0x2AA9,
    UUID_CHARACTERISTIC_CGM_SESSION_START_TIME                              = 0x2AAA,
    UUID_CHARACTERISTIC_CGM_SESSION_RUN_TIME                                = 0x2AAB,
    UUID_CHARACTERISTIC_CGM_SPECIFIC_OPS_CONTROL_POINT                      = 0x2AAC,
    UUID_CHARACTERISTIC_INDOOR_POSITIONING_CONFIGURATION                    = 0x2AAD,
    UUID_CHARACTERISTIC_LATITUDE                                            = 0x2AAE,
    UUID_CHARACTERISTIC_LONGITUDE                                           = 0x2AAF,
    UUID_CHARACTERISTIC_LOCAL_NORTH_COORDINATE                              = 0x2AB0,
    UUID_CHARACTERISTIC_LOCAL_EAST_COORDINATE                               = 0x2AB1,
    UUID_CHARACTERISTIC_FLOOR_NUMBER                                        = 0x2AB2,
    UUID_CHARACTERISTIC_ALTITUDE                                            = 0x2AB3,
    UUID_CHARACTERISTIC_UNCERTAINTY                                         = 0x2AB4,
    UUID_CHARACTERISTIC_LOCATION_NAME                                       = 0x2AB5,
    UUID_CHARACTERISTIC_URI                                                 = 0x2AB6,
    UUID_CHARACTERISTIC_HTTP_HEADERS                                        = 0x2AB7,
    UUID_CHARACTERISTIC_HTTP_STATUS_CODE                                    = 0x2AB8,
    UUID_CHARACTERISTIC_HTTP_ENTITY_BODY                                    = 0x2AB9,
    UUID_CHARACTERISTIC_HTTP_CONTROL_POINT                                  = 0x2ABA,
    UUID_CHARACTERISTIC_HTTPS_SECURITY                                      = 0x2ABB,
};

#endif
