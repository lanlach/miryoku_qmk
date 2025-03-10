//
// Created by nethe on 11/9/2022.
//

#ifndef WYLD_QMK_FIRMWARE_6X7_H
#define WYLD_QMK_FIRMWARE_6X7_H

#endif // WYLD_QMK_FIRMWARE_6X6_H

#pragma once

#include "trackball.h"
#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_6x7( \
    L00, L01, L02, L03, L04, L05, L06,                         R00, R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15, L16,                         R10, R11, R12, R13, R14, R15, R16, \
    L20, L21, L22, L23, L24, L25, L26,                         R20, R21, R22, R23, R24, R25, R26, \
    L30, L31, L32, L33, L34, L35, L36, L55,                    R30, R31, R32, R33, R34, R35, R36, \
    L40, L41, L42, L43, L44, L45, L46,                         R40, R41, R42, R43, R44, R45, R46, \
    L50, L51, L52, L53, L54,                                             R52, R53, R54, R55, R56, \
                               L63, L62, L61,            R61, R62, R63, \
                                    L65, L64 \
) { \
    { L00, L01, L02, L03, L04, L05, L06 }, \
    { L10, L11, L12, L13, L14, L15, L16 }, \
    { L20, L21, L22, L23, L24, L25, L26 }, \
    { L30, L31, L32, L33, L34, L35, L36 }, \
    { L40, L41, L42, L43, L44, L45, L46 }, \
    { L50, L51, L52, L53, L54, L55, XXX }, \
    { XXX, L61, L62, L63, L64, L65, XXX }, \
\
    { R00, R01, R02, R03, R04, R05, R06 }, \
    { R10, R11, R12, R13, R14, R15, R16 }, \
    { R20, R21, R22, R23, R24, R25, R26 }, \
    { R30, R31, R32, R33, R34, R35, R36 }, \
    { R40, R41, R42, R43, R44, R45, R46 }, \
    { XXX, XXX, R52, R53, R54, R55, R56 }, \
    { XXX, R61, R62, R63, XXX, XXX, XXX } \
}
