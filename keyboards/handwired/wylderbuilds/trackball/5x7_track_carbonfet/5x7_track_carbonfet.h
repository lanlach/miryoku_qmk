#pragma once

#include "trackball.h"

#define XXX KC_NO


#define LAYOUT_5x7( \
    L00, L01, L02, L03, L04, L05,                   R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15,                   R11, R12, R13, R14, R15, R16, \
    L20, L21, L22, L23, L24, L25,                   R21, R22, R23, R24, R25, R26, \
    L30, L31, L32, L33, L34, L35,                   R31, R32, R33, R34, R35, R36, \
              L42, L43,                                       R43, R44, \
                        L44, L45, L46,         R40, R41, R42, \
                        L54, L55, L56,         R50, R51, R52 \
) { \
    { L00, L01, L02, L03, L04, L05, XXX }, \
    { L10, L11, L12, L13, L14, L15, XXX }, \
    { L20, L21, L22, L23, L24, L25, XXX }, \
    { L30, L31, L32, L33, L34, L35, XXX }, \
    { XXX, XXX, XXX, L43, L44, L45, L46 }, \
    { XXX, XXX, XXX, L53, L54, L55, L56 }, \
\
    { XXX, R01, R02, R03, R04, R05, R06 }, \
    { XXX, R11, R12, R13, R14, R15, R16 }, \
    { XXX, R21, R22, R23, R24, R25, R26 }, \
    { XXX, R31, R32, R33, R34, R35, R36 }, \
    { R40, R41, R42, R43, R44, XXX, XXX }, \
    { R50, R51, R52, XXX, XXX, XXX, XXX } \
}
