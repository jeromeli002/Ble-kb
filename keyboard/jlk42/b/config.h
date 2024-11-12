/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2019 Jim Jiang <jim@lotlab.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <stdint.h>

/* USB和蓝牙的显示参数 */
#define VENDOR_ID 0x1209 /* USB VID */
#define PRODUCT_ID 0x0514 /* USB PID */
#define CONF_VENDOR_ID 0x4367 /* 配置项目内显示的VendorID */
#define CONF_PRODUCT_ID 0x0321 /* 配置项目内显示的ProductID */
#define DEVICE_VER 0x0000 /* 硬件版本 */
#define MANUFACTURER "JL" /* 硬件制造商，用于蓝牙显示 */
#define PRODUCT "\u5e7c\u5e74\u952e\u76d842" /* 硬件名称，用于USB和蓝牙显示 */
//#define MACADDR_SEPRATOR ' ' /* 蓝牙名称后地址的分隔符。若不设置则不显示蓝牙名称后面的地址 */

/* USB HID report parameter */
#define KEYBOARD_EPSIZE 8 /* 键盘上传端点大小，请不要修改 */
#define NKRO_EPSIZE 28 /* 键盘NKRO端点大小，请不要修改 */

// 定义Bootmagic按键
#define BOOTMAGIC_KEY_BOOT KC_U /* 开机 */
#define BOOTMAGIC_KEY_ERASE_BOND KC_E /* 删除所有绑定 */

// 键盘省电参数
#define SLEEP_SLOW_TIMEOUT 15 // 键盘闲置多久后转入慢速扫描模式 (s)
#define SLEEP_OFF_TIMEOUT 1200 // 键盘闲置多久后转入自动关机 (s)
#define KEYBOARD_SCAN_INTERVAL 1 // 键盘最小时间单位TICK (ms)
#define KEYBOARD_FAST_SCAN_INTERVAL 10 // 通常模式下，多久扫描一次键盘 (ms)
#define KEYBOARD_SLOW_SCAN_INTERVAL 100 // 慢速模式下，多久扫描一次键盘 (ms)
#define LED_AUTOOFF_TIME 5 /* LED自动熄灭时长(s)，设为0则不自动熄灭 */

// 键盘额外功能
//#define DYNAMIC_TX_POWER /* 启用自动发射功率调整 */
//#define PASSKEY_REQUIRED /* 需要输入配对码 */
#define ENABLE_WATCHDOG /* 启用看门狗 */
#define HIGH_TX_POWER /* 更改发射功率到+4dBm */
#define MULTI_DEVICE_SWITCH  /*启用多设备切换 */
#define KEYMAP_STORAGE /* 启用keymap存储 */
// #define MACRO_BLOCKING_MODE /* 在宏播放时禁用其他按键输入 */
#define MACRO_STORAGE /* 启用宏存储功能 */
#define CONFIG_STORAGE /* 启用配置存储功能 */
//#define BUTTONLESS_DFU /* 启用免按钮DFU */

//#define DEBUG_SKIP_PWRON_CHECK /*  直接开机而跳过开机条件检测，用于调试 */

/* TMK固件内置功能 */
/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)))


// LED 配置
//#define LED_CAPS 25 // 21  大写指示灯
//#define LED_NUM 26 // 31  数字小键盘灯
//#define LED_SCLK 27 // 4  scroll lock灯

// ws2812 RGB 配置
#define RGBLED_NUM 43 // 8   RGB灯数量
#define RGB_DI_PIN 25 // 10   RGB灯IO口
#define RGBLIGHT_ANIMATIONS
#define RGB_PWR_PIN 26 // P型-mos管
//#define RGB_PWR_PIN_REVERSE 20 // N型-mos管

// 启用 RGB三色灯
//#define LED_RGB_CC  //* 是否为共阴LED 
//#define LED_RGB_R 20 // RGB-R 灯 
//#define LED_RGB_G 20 // RGB-G 灯 
//#define LED_RGB_B 20 // RGB-B 灯 

// 启用 LED 状态灯
//#define LED_STATUS_BLE 25// 蓝牙状态灯
//#define LED_STATUS_CHARGING 26// 充电状态灯
//#define LED_STATUS_USB 27// USB状态灯
//#define LED_BLE_CHANNEL1 25// 状态灯１
//#define LED_BLE_CHANNEL2 26// 状态灯２
//#define LED_BLE_CHANNEL3 27// 状态灯３
// #define LED_POSITIVE // LED上拉驱动

// 独立硬件按钮
#define POWER_BUTTON 21 // 3

// 旋钮配置
#define ROTARY_ENCODER_A 7 // 19
#define ROTARY_ENCODER_B 6 // 20
#define ROTARY_ENCODER_POS 4,0 // 正向旋转映射到键盘的按键行列（Row，Col）
#define ROTARY_ENCODER_NEG 4,1 // 负向旋转映射到键盘的按键行列（Row，Col）

// OLED 屏幕配置
//#define SSD1306_SDA 22 // 22
//#define SSD1306_SCL 23 // 23
//#define SSD1306_ROTATE_180  //  OLED屏幕旋转180° 

// USB UART 传输配置
#define HAS_USB // 启用与CH554的通信支持
#define UART_RXD 8 // UART_RX口IO 17
#define UART_TXD 9 // UART_TX口IO 18
//#define UART_DET 19 // UART 检测引脚，若此脚被拉低，则说明USB正在工作。若不配置则使用RX口作为检测引脚
#define UART_BAUDRATE NRF_UART_BAUDRATE_115200 // 通信波特率，请不要修改
#define CH55X_FREQ_SYS 24000000

// 电量检测配置
#define BATTERY_ADC_PIN NRF_SAADC_INPUT_AIN0 // 电量检测引脚 Pin 2

// 充电检测配置
//#define PIN_CHARGING !UCC1
//#define PIN_STANDBY !UCC2

// 按键阵列配置
#define MATRIX_ROWS 6 /* 硬件阵列行数 */
#define MATRIX_COLS 12 /* 硬件阵列列数 */
static const uint8_t row_pin_array[MATRIX_ROWS] = { 15, 14, 11, 20, 18, 19};
static const uint8_t column_pin_array[MATRIX_COLS] = { 23, 24, 29, 30, 21, 12, 13, 16, 17, 5, 22, 10 };
#define ROW_IN // 键盘阵列的二极管方向是从COL->ROW
//#define LESS_IO  //键盘阵列采用更少的IO口

/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST /* 按键阵列是否出现Ghost Key，若没有加二极管则需要启用这个项目 */

#define DEBOUNCE 5 /* 硬件消抖次数，设置为0则不消抖 */
#define MATRIX_SCAN_DELAY_CYCLE 48 /* 按键扫描等待IO稳定的延时时长 */

