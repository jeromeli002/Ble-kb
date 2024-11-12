/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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

/**
 * 键盘矩阵基配置文件
 * 
 * 定义各个按键的位置，方便编写Keymap
 */
#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
#define KEYMAP( \
	     K01, K02, K03, K04, K05, K06, \
	K10,      K12, K13, K14, K15, K16, \
	K20, K21,      K23, K24, K25, K26, \
	K30, K31, K32,      K34, K35, K36, \
	K40, K41, K42, K43,      K45, K46, \
	K50, K51, K52, K53, K54,      K56, \
	K60, K61, K62, K63, K64, K65  \
) { \
	{ KC_NO,  K01,    K02,    K03,    K04,    K05,    K06 }, \
	{ K10,    KC_NO,  K12,    K13,    K14,    K15,    K16 }, \
	{ K20,    K21,    KC_NO,  K23,    K24,    K25,    K26 }, \
	{ K30,    K31,    K32,    KC_NO,  K34,    K35,    K36 }, \
	{ K40,    K41,    K42,    K43,    KC_NO,  K45,    K46 }, \
	{ K50,    K51,    K52,    K53,    K54,    KC_NO,  K56 }, \
	{ K60,    K61,    K62,    K63,    K64,    K65,    KC_NO }  \
}

/* ANSI variant. No extra keys for ISO */
#define KEYMAP_ANSI( \
	     K01, K02, K03, K04, K05, K06, \
	K10,      K12, K13, K14, K15, K16, \
	K20, K21,      K23, K24, K25, K26, \
	K30, K31, K32,      K34, K35, K36, \
	K40, K41, K42, K43,      K45, K46, \
	K50, K51, K52, K53, K54,      K56, \
	K60, K61, K62, K63, K64, K65  \
) KEYMAP( \
	     K01, K02, K03, K04, K05, K06, \
	K10,      K12, K13, K14, K15, K16, \
	K20, K21,      K23, K24, K25, K26, \
	K30, K31, K32,      K34, K35, K36, \
	K40, K41, K42, K43,      K45, K46, \
	K50, K51, K52, K53, K54,      K56, \
	K60, K61, K62, K63, K64, K65  \
)


#define KEYMAP_HHKB( \
	     K01, K02, K03, K04, K05, K06, \
	K10,      K12, K13, K14, K15, K16, \
	K20, K21,      K23, K24, K25, K26, \
	K30, K31, K32,      K34, K35, K36, \
	K40, K41, K42, K43,      K45, K46, \
	K50, K51, K52, K53, K54,      K56, \
	K60, K61, K62, K63, K64, K65  \
) KEYMAP( \
	     K01, K02, K03, K04, K05, K06, \
	K10,      K12, K13, K14, K15, K16, \
	K20, K21,      K23, K24, K25, K26, \
	K30, K31, K32,      K34, K35, K36, \
	K40, K41, K42, K43,      K45, K46, \
	K50, K51, K52, K53, K54,      K56, \
	K60, K61, K62, K63, K64, K65  \
)
