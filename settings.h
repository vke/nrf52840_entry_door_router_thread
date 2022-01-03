#ifndef __SETTINGS__H__
#define __SETTINGS__H__

#define INFO_FIRMWARE_TYPE                   "entrydoorrouter"
#define INFO_FIRMWARE_VERSION                "1.0.0"

#define RADIO_TRANSMIT_POWER                 8

#define SUBSCRIPTION_TIMER_INTERVAL          500
#define INTERNAL_TEMPERATURE_TIMER_INTERVAL  1000
#define VOLTAGE_TIMER_INTERVAL               1000

#define DEFAULT_POLL_PERIOD                  120000
#define DEFAULT_POLL_PERIOD_FAST             50
#define DEFAULT_POLL_PERIOD_FAST_TIMEOUT     500
#define DEFAULT_CHILD_TIMEOUT                240

#define ADC_SAMPLES_PER_CHANNEL              32

#define LED_SEND_NOTIFICATION                BSP_BOARD_LED_0
#define LED_RECV_NOTIFICATION                BSP_BOARD_LED_1
#define LED_ROUTER_ROLE                      BSP_BOARD_LED_2
#define LED_CHILD_ROLE                       BSP_BOARD_LED_3

//#define DISABLE_OT_ROLE_LIGHTS               1
//#define DISABLE_OT_TRAFFIC_LIGHTS            1

#endif // __SETTINGS__H__
