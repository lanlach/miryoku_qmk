#pragma once

#include "trackball.h"

#define XXX KC_NO


#define LAYOUT_5x6_wyld_track( \
    L55, L54, L53, L52, L51, L50,                          R50, R51, R52, R53, R54, R55, \
    L45, L44, L43, L42, L41, L40,                          R40, R41, R42, R43, R44, R45, \
    L35, L34, L33, L32, L31, L30,                          R30, R31, R32, R33, R34, R35, \
    L25, L24, L23, L22, L21, L20,                          R20, R21, R22, R23, R24, R25, \
              L13, L12,                                              R12, R13, \
                       L03, L02, L01,                   R02, R03, \
                                                      R01, R00, \
                                                    R06, R07 \
) { \
    { XXX, L01, L02, L03, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, L12, L13, XXX, XXX, XXX, XXX }, \
    { L20, L21, L22, L23, L24, L25, XXX, XXX }, \
    { L30, L31, L32, L33, L34, L35, XXX, XXX }, \
    { L40, L41, L42, L43, L44, L45, XXX, XXX }, \
    { L50, L51, L52, L53, L54, L55, XXX, XXX }, \
\
    { R00, R01, R02, R03, XXX, XXX, R06, R07 }, \
    { XXX, XXX, R12, R13, XXX, XXX, XXX, XXX }, \
    { R20, R21, R22, R23, R24, R25, XXX, XXX }, \
    { R30, R31, R32, R33, R34, R35, XXX, XXX }, \
    { R40, R41, R42, R43, R44, R45, XXX, XXX }, \
    { R50, R51, R52, R53, R54, R55, XXX, XXX }, \
}
