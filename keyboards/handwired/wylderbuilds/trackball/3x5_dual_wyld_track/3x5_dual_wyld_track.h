#pragma once

#include "trackball.h"

#define XXX KC_NO

// MINI AND THREE KEY
#define LAYOUT_split_3x5_3( \
    L00, L01, L02, L03, L04,         R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14, L31,    R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24,         R20, R21, R22, R23, R24, \
              L32, L33, L34,         R30, R31, R32 \
) { \
    { L00, L01, L02, L03, L04 }, \
    { L10, L11, L12, L13, L14 }, \
    { L20, L21, L22, L23, L24 }, \
    { XXX, L31, L32, L33, L34 }, \
    { R00, R01, R02, R03, R04 }, \
    { R10, R11, R12, R13, R14 }, \
    { R20, R21, R22, R23, R24 }, \
    { R30, R31, R32, XXX, XXX } \
}

/* STANDARD LAYOUT WITH SKREE CLAW CONFIG
#define LAYOUT_5x6( \
    L01, L02, L03, L04, L05, L06,                 R00, R01, R02, R03, R04, R05, \
    L11, L12, L13, L14, L15, L16,                 R10, R11, R12, R13, R14, R15, \
    L21, L22, L23, L24, L25, L26,                 R20, R21, R22, R23, R24, R25, \
    L31, L32, L33, L34, L35, L36,                 R30, R31, R32, R33, R34, R35, \
              L43, L44,                                      R42, R43, \
                        L53, L52,                 R56, \
                           L55, L51,              R55, \
                             L54, L50,       R53, R54 \
) { \
    { XXX, L01, L02, L03, L04, L05, L06 }, \
    { XXX, L11, L12, L13, L14, L15, L16 }, \
    { XXX, L21, L22, L23, L24, L25, L26 }, \
    { XXX, L31, L32, L33, L34, L35, L36 }, \
    { XXX, XXX, L43, L44, XXX, XXX, XXX }, \
    { L50, L51, L52, L53, L54, L55, XXX }, \
\
    { R00, R01, R02, R03, R04, R05, XXX }, \
    { R10, R11, R12, R13, R14, R15, XXX }, \
    { R20, R21, R22, R23, R24, R25, XXX }, \
    { R30, R31, R32, R33, R34, R35, XXX }, \
    { XXX, XXX, R42, R43, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, R53, R54, R55, R56 } \
}
*/
