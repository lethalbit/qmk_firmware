#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_jp.h"
#include "keymap_us_international.h"


#define _A 0
#define _S 1
#define _F 2
#define _N 3

#define KC_UNDO LCTL(KC_Z)
#define KC_REDO LCTL(KC_Y)
#define KC_COPY LCTL(KC_C)
#define KC_SALL LCTL(KC_A)
#define KC_CUT  LCTL(KC_X)
#define KC_TILD LSFT(KC_GRV)
#define KC_EXCL LSFT(KC_1)
#define KC_AT   LSFT(KC_2)
#define KC_CASH LSFT(KC_4)
#define KC_MOD  LSFT(KC_5)

#define KC_LSHF KC_LSHIFT
#define KC_RSHF KC_RSHIFT
#define KC_LCTL KC_LCTRL
#define KC_RCTL KC_RCTRL

#define KC_NYA KC_TRNS


enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_172_255_255,
  HSV_86_255_128,
  HSV_27_255_255,
  JP_LSPO,
  JP_RSPC,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_A] = LAYOUT_ergodox(
    /* LEFT */
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_SALL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    TG(_S),
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
    KC_LSHF, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HOME,
    KC_LCTL, KC_LGUI, KC_LALT, TG(_N),  TG(_F),
                                                 JP_ZHTG, JP_MHEN,
                                                          KC_COPY,
                                        KC_SPC,  KC_BSPC, KC_UNDO,
    /* RIGHT */
    KC_TILD, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    TG(_F),  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_END , KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL,
                      TG(_F),  TG(_N),  KC_RALT, KC_RGUI, KC_RCTL,
    JP_HENK, JP_KANA,
    KC_CUT,
    KC_REDO, KC_SPC, KC_ENT
  ),
  /* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
  [_S] = LAYOUT_ergodox(
    /* LEFT */
    KC_NYA,  KC_EXCL, KC_AT,   KC_HASH, KC_CASH, KC_MOD,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
                                                 KC_NYA,  KC_NYA,
                                                          KC_NYA,
                                         KC_UP, KC_DOWN,  KC_NYA,
    /* RIGHT */
    KC_NYA,  KC_CIRC, KC_AMPR, KC_ASTR, KC_NYA,  KC_NYA,  KC_UNDS,
    KC_NYA,  KC_NYA,  KC_LCBR, KC_RCBR, KC_NYA,  KC_NYA,  KC_PIPE,
             KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, KC_COLN, KC_DQUO,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_LT,   KC_GT,   KC_QUES, KC_PLUS,
                      KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,
    KC_NYA,
    KC_NYA,  KC_LEFT, KC_RGHT
  ),
  /* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
  [_F] = LAYOUT_ergodox(
    /* LEFT */
    KC_NYA,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA, KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA, KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
                                                 KC_NYA, KC_NYA,
                                                         KC_NYA,
                                        KC_NYA,  KC_NYA, KC_NYA,
    /* RIGHT */
    KC_NYA,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_F12,
             KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
                      KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,
    KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA
  ),
  [_N] = LAYOUT_ergodox(
    /* LEFT */
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
                                                 KC_NYA,  KC_NYA,
                                                          KC_NYA,
                                        KC_NYA,  KC_NYA,  KC_NYA,
    /* RIGHT */
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
             KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
                      KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,  KC_NYA,
    KC_NYA,  KC_NYA,
    KC_NYA,
    KC_NYA,  KC_NYA,  KC_NYA
  ),
};


rgblight_config_t rgblight_config;
bool disable_layer_color = 0;

bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case JP_LSPO:
      perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_8);
      return false;
    case JP_RSPC:
      perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_9);
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(172,255,255);
        #endif
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(86,255,128);
        #endif
      }
      return false;
    case HSV_27_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(27,255,255);
        #endif
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    switch (layer) {
      case 0:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(183,106,251);
        }
        break;
      case 1:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(150,171,253);
        }
        break;
      case 2:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(23,163,255);
        }
        break;
      default:
        if(!disable_layer_color) {
          rgblight_config.raw = eeconfig_read_rgblight();
          if(rgblight_config.enable == true) {
            rgblight_enable();
            rgblight_mode(rgblight_config.mode);
            rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
          }
          else {
            rgblight_disable();
          }
        }
        break;
    }
    return state;

};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}


