// application-specific configuration
// augments the base configuration in sdk/<SDK>/config/<IC>/config/sdk_config.h

#pragma once

#define BLE_ADVERTISING_ENABLED 1
#define NRF_BLE_CONN_PARAMS_ENABLED 1
#define NRF_BLE_GATT_ENABLED 1
#define NRF_BLE_QWR_ENABLED 1
#define BLE_ECS_ENABLED 1

#define BLE_LBS_ENABLED 1
#define BLE_NUS_ENABLED 1

#define GPIOTE_ENABLED 1
#define GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 4
#define NRFX_GPIOTE_ENABLED 1

#define NRFX_RNG_ENABLED 1
#define RNG_ENABLED 1

#define NRF_SPI_MNGR_ENABLED 1
#define NRFX_SPIM_ENABLED 1
#define NRFX_SPI_ENABLED 1
#define SPI_ENABLED 1
#define SPI0_ENABLED 1

#define APP_SDCARD_ENABLED 1

#define CLOCK_ENABLED 1
#define NRFX_CLOCK_ENABLED 1

#define NRFX_TIMER_ENABLED 1
#define TIMER_ENABLED 1
#define TIMER_DEFAULT_CONFIG_BIT_WIDTH 3
#define TIMER0_ENABLED 1
#define APP_TIMER_ENABLED 1
#define APP_TIMER_CONFIG_USE_SCHEDULER 1
#define APP_TIMER_KEEPS_RTC_ACTIVE 1

#define NRFX_UARTE_ENABLED 1
#define NRFX_UART_ENABLED 1
#define UART_ENABLED 1
#define UART0_ENABLED 1
#define APP_UART_ENABLED 1
#define HCI_UART_TX_PIN 8
#define HCI_UART_RX_PIN 6

#define NRFX_TWIM_ENABLED 1
#define NRFX_TWI_ENABLED 1
#define TWI_ENABLED 1
#define TWI0_ENABLED 1
#define TWI0_USE_EASY_DMA 1

#define APP_FIFO_ENABLED 1
#define APP_SCHEDULER_ENABLED 1

#define CRC16_ENABLED 1

#define NRF_FSTORAGE_ENABLED 1
#define FDS_ENABLED 1
#define FDS_VIRTUAL_PAGES 10
#define FDS_OP_QUEUE_SIZE 10

#define MEM_MANAGER_ENABLED 1

#define NRF_QUEUE_ENABLED 1

#define NRF_PWR_MGMT_ENABLED 1
#define NRF_PWR_MGMT_CONFIG_FPU_SUPPORT_ENABLED 1

// Disable retargeting of printf to UART, as we retarget it to RTT
#define RETARGET_ENABLED 0

#define NRF_SECTION_ITER_ENABLED 1

#define NRF_LOG_ENABLED 1
#define NRF_LOG_BACKEND_UART_ENABLED 0
#define NRF_LOG_BACKEND_RTT_ENABLED 1
#define NRF_LOG_USES_RTT 1
#define NRF_LOG_DEFERRED 0

#define NRF_SERIAL_ENABLED 1

#define NRF_SDH_ENABLED 1
#define NRF_SDH_BLE_ENABLED 1
#define NRF_SDH_BLE_GAP_DATA_LENGTH 251
#define NRF_SDH_BLE_PERIPHERAL_LINK_COUNT 1
#define NRF_SDH_BLE_GATT_MAX_MTU_SIZE 247
#define NRF_SDH_BLE_VS_UUID_COUNT 10
#define NRF_SDH_SOC_ENABLED 1