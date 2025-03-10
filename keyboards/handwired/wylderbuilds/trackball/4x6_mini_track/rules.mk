MCU = RP2040
SPLIT_KEYBOARD = yes
BOOTLOADER = rp2040
#POINTING_DEVICE_DRIVER = pmw3389

SERIAL_DRIVER = vendor
MOUSEKEY_ENABLE = yes
CONSOLE_ENABLE = yes
#COMMAND_ENABLE = yes
BOOTMAGIC_ENABLE = yes
OLED_ENABLE = no
#OLED_DRIVER = SSD1306
WPM_ENABLE = no
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # Enable N-Key Rollover
ENCODER_ENABLE = no

RGBLIGHT_ENABLE = no
#WS2812_DRIVER = vendor
SLEEP_LED_ENABLE = no

# OPT_DEFS += -DHAL_USE_I2C=TRUE