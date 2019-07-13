#pragma once

#include "quantum.h"

#ifdef KEYBOARD_keebio_quefrency_rev1
    #include "rev1.h"
#endif

// Used to create a keymap using only KC_ prefixed keys
#define LAYOUT_kc( \
    LA1, LA2, LA3, LA4, LA5, LA6, RA1, RA2, RA3, RA4, RA5, RA6, RA7, \
    LB1, LB2, LB3, LB4, LB5, LB6, RB1, RB2, RB3, RB4, RB5,      RB7, \
    LC1, LC2, LC3, LC4, LC5, LC6, RC1,      RC3, RC4, RC5, RC6, RC7, \
    LD1, LD2, LD3, LD4, LD5,      RD1,      RD4, RD5, RD6, RD7 \
    ) \
    LAYOUT( \
        KC_##LA1, KC_##LA2, KC_##LA3, KC_##LA4, KC_##LA5, KC_##LA6, KC_##RA1, KC_##RA2, KC_##RA3, KC_##RA4, KC_##RA5, KC_##RA6, KC_##RA7, \
        KC_##LB1, KC_##LB2, KC_##LB3, KC_##LB4, KC_##LB5, KC_##LB6, KC_##RB1, KC_##RB2, KC_##RB3, KC_##RB4, KC_##RB5,           KC_##RB7, \
        KC_##LC1, KC_##LC2, KC_##LC3, KC_##LC4, KC_##LC5, KC_##LC6, KC_##RC1,           KC_##RC3, KC_##RC4, KC_##RC5, KC_##RC6, KC_##RC7, \
        KC_##LD1, KC_##LD2, KC_##LD3, KC_##LD4, KC_##LD5,           KC_##RD1,                     KC_##RD4, KC_##RD5, KC_##RD6, KC_##RD7 \
    )
/*
  [_BASE] = LAYOUT(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP, \
    KC_LCTL, KC_LALT, KC_LGUI, MO(_FN1),KC_SPC,           MO(_FN1),KC_BSPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_BASE] = LAYOUT_63(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    KC_LCTL, KC_LALT, KC_LGUI,           KC_SPC,          MO(_FN1),       KC_SPC,  KC_RALT, KC_RGUI, MO(_FN2), KC_RCTL
  ),
*/

#define LAYOUT_63( \
  LA1, LA2, LA3, LA4, LA5, LA6, LA7, RA1, RA2, RA3, RA4, RA5, RA6, RA7, \
  LB1, LB2, LB3, LB4, LB5, LB6,      RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8, \
  LC1, LC2, LC3, LC4, LC5, LC6,      RC1, RC2, RC3, RC4, RC5, RC6, RC7, \
  LD1,      LD3, LD4, LD5, LD6, LD7, RD1, RD2, RD3, RD4,      RD6, RD7, \
  LE1, LE2, LE3,      LE5,      LE7, RE1,           RE4, RE5,      RE7, RE8 \
  ) \
  { \
    { LA1, LA2, LA3, LA4, LA5, LA6, LA7, KC_NO }, \
    { LB1, LB2, LB3, LB4, LB5, LB6, KC_NO, KC_NO }, \
    { LC1, LC2, LC3, LC4, LC5, LC6, KC_NO, KC_NO }, \
    { LD1, KC_NO, LD3, LD4, LD5, LD6, LD7, KC_NO }, \
    { LE1, LE2, LE3, KC_NO, LE5, KC_NO, LE7, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { RA1, RA2, RA3, RA4, RA5, RA6, KC_NO, RA7 }, \
    { RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8 }, \
    { RC1, RC2, RC3, RC4, RC5, RC6, KC_NO, RC7 }, \
    { RD1, RD2, RD3, RD4, KC_NO, RD6, RD7, KC_NO }, \
    { RE1, KC_NO, KC_NO, RE4, RE5, KC_NO, RE7, RE8 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO } \
  }
