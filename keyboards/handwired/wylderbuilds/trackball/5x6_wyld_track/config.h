// Dactyl Manuform Hotswap
#pragma once

//#include "config_common.h"
// Basic Config

#ifndef WYLD_QMK_FIRMWARE_CONFIG_H
#define WYLD_QMK_FIRMWARE_CONFIG_H

#endif // WYLD_QMK_FIRMWARE_CONFIG_H


#define USE_SERIAL
//#define SPLIT_HAND_PIN      GP26  // high = left, low = right
#define SPLIT_HAND_PIN   GP0
#define SPLIT_LAYER_STATE_ENABLE

#define USB_VBUS_PIN GP27
#define SERIAL_USART_TX_PIN GP28
#define SERIAL_PIO_USE_PIO0
//#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
//#define SERIAL_USART_SPEED 921600.......
//#define SERIAL_USART_PIN_SWAP

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U

/* key matrix size */
// Columns are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS { GP2, GP3, GP8, GP4, GP13, GP9 }
#define MATRIX_COL_PINS { GP1, GP10, GP11, GP12, GP7, GP6, GP5, GP19 }

#define DIODE_DIRECTION ROW2COL

#define SPI_SCK_PIN   GP22
#define SPI_MOSI_PIN  GP23
#define SPI_MISO_PIN  GP20

#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  -25
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_LEFT
#define PMW33XX_CS_PIN GP21
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x03

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC

#define CHARYBDIS_MINIMUM_DEFAULT_DPI 1200
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 400
#define CHARYBDIS_MINIMUM_SNIPING_DPI 400
#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 200

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A { GP16 }
#define ENCODERS_PAD_B { GP18 }
#define ENCODER_RESOLUTIONS { 2 }
//#define ENCODERS_PAD_A_RIGHT { GP26 }
//#define ENCODERS_PAD_B_RIGHT { GP27 }
//#define ENCODER_RESOLUTIONS_RIGHT { 2 }
#endif

//// Sensor Notes ////
//// Pi Pico pins ////
// 3V3  -- Power (not 3v3_EN!)
// GP21 -- CS pin
// GP20 -- MISO pin
// GP19 -- MOSI pin
// GP18 -- SCK pin clock
// GND  -- GND

#ifdef RGB_MATRIX_ENABLE
#    define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
#    define SPLIT_TRANSPORT_MIRROR
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE // Sets the default mode, if none has been set
#    define RGB_MATRIX_DEFAULT_HUE 33 // Sets the default hue value, if none has been set
#    define RGB_MATRIX_DEFAULT_SAT 255 // Sets the default saturation value, if none has been set
#    define RGB_MATRIX_DEFAULT_SPD 50
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#endif

//// OLED Pins and Driver
//#define SPLIT_OLED_ENABLE
#define SPLIT_MODS_ENABLE
//// OLED Pins and Driver
#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP16
#define I2C1_SCL_PIN GP17
// OLED Options
#define SPLIT_OLED_ENABLE
#define SPLIT_WPM_ENABLE
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_MATRIX_SIZE 512
#define OLED_RESET -1
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 32000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 0
#endif

// Misc settings
// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE
// Enables This makes it easier for fast typists to use dual-function keys
#define PERMISSIVE_HOLD
// End of Basic Config
