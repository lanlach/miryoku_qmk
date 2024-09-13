#pragma once

#include "trackball.h"

#define XXX KC_NO


#define LAYOUT_6x6( \
L01, L02, L03, L04, L05, L06,                      R00, R01, R02, R03, R04, R05, \
L11, L12, L13, L14, L15, L16,                      R10, R11, R12, R13, R14, R15, \
L21, L22, L23, L24, L25, L26,                      R20, R21, R22, R23, R24, R25, \
L31, L32, L33, L34, L35, L36,                      R30, R31, R32, R33, R34, R35, \
L41, L42, L43, L44, L45, L46,                      R40, R41, R42, R43, R44, R45, \
          L53, L54,                                          R52, R53, \
                    L62, L61, L60,                    R61, \
                    L65, L64, L63,                    R62, \
                                                 R64, R63 \
) { \
{ XXX, L01, L02, L03, L04, L05, L06 }, \
{ XXX, L11, L12, L13, L14, L15, L16 }, \
{ XXX, L21, L22, L23, L24, L25, L26 }, \
{ XXX, L31, L32, L33, L34, L35, L36 }, \
{ XXX, L41, L42, L43, L44, L45, L46 }, \
{ XXX, XXX, XXX, L53, L54, XXX, XXX }, \
{ L60, L61, L62, L63, L64, L65, XXX}, \
\
{ R00, R01, R02, R03, R04, R05, XXX }, \
{ R10, R11, R12, R13, R14, R15, XXX }, \
{ R20, R21, R22, R23, R24, R25, XXX }, \
{ R30, R31, R32, R33, R34, R35, XXX }, \
{ R40, R41, R42, R43, R44, R45, XXX }, \
{ XXX, XXX, R52, R53, XXX, XXX, XXX }, \
{ XXX, R61, R62, R63, R64, XXX, XXX } \
}
