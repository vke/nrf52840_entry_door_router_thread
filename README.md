Thread (OpenThread) firmware for nrf52840-based Thread entry door router node.

Steps to compile:

1) download and unpack Thread SDK 4.1.0
2) open Tools => Options => Building => Global Macros settings in Segger Embedded Studio and fill `PATH_TO_SDK` variable with path to Thread SDK without trailing slash, i.e. `PATH_TO_SDK=C:/thread_sdk_410`
3) open poject file `./efekta_mini_dev_board/s140/ses/nrf52840_entry_door_router_thread.emProject` in Segger Embedded Studio
4) сhange project settings if necessary (settings.h file)
5) compile and flash firmware
