#include QMK_KEYBOARD_H


#define _APT 0
#define _SHIFTED 1
#define _LOWERED 2
#define _RAISED 3
#define _ADJUSTED 4

enum custom_keycodes {
  APT = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_APT] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_LBRC, KC_LCBR, KC_RCBR, KC_LPRN, KC_EQL,                             KC_ASTR, KC_RPRN, KC_PLUS, KC_RBRC, KC_EXLM, KC_HASH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_W,    KC_G,    KC_D,    KC_F,    KC_B,                               KC_Q,    KC_L,    KC_U,    KC_O,    KC_Y,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_R,    KC_S,    KC_T,    KC_H,    KC_K,                               KC_J,    KC_N,    KC_E,    KC_A,    KC_I,    KC_SCLN,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_X,    KC_C,    KC_M,    KC_P,    KC_V,    KC_ENT,           KC_SPC,  KC_Z,    KC_COMM, KC_DOT,  KC_QUOT, KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, LOWER,   KC_ENT,                    KC_SPC,  RAISE,   KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SHIFTED] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_7,    KC_5,    KC_3,    KC_1,    KC_9,                               KC_0,    KC_2,    KC_4,    KC_6,    KC_8,    KC_GRV,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWERED] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F11,  KC_F7,   KC_F5,   KC_F3,   KC_F1,   KC_F9,                              KC_F10,  KC_F2,   KC_F4,   KC_F6,   KC_F8,   KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, KC_MINS, KC_AT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_AMPR, KC_DLR,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, KC_BSLS, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISED] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F11,  KC_F7,   KC_F5,   KC_F3,   KC_F1,   KC_F9,                              KC_F10,  KC_F2,   KC_F4,   KC_F6,   KC_F8,   KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_VOLU, KC_VOLD, KC_MUTE, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUSTED] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_PSCR, KC_BRMD, KC_BRMU, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )

};

void unregister_shift(void) {
  if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
    unregister_code(KC_LSFT);
  } else if ((get_mods() & MOD_BIT(KC_RSFT)) == MOD_BIT(KC_RSFT)) {
    unregister_code(KC_RSFT);
  }
}

void register_shift(void) {
  if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
    register_code(KC_LSFT);
  } else if ((get_mods() & MOD_BIT(KC_RSFT)) == MOD_BIT(KC_RSFT)) {
    register_code(KC_RSFT);
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case APT:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_APT);
      }
      return false;
      break;
    case KC_LSFT:
    case KC_RSFT:
      if (record->event.pressed) {
        layer_on(_SHIFTED);
      } else {
        layer_off(_SHIFTED);
      }
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWERED);
        update_tri_layer(_LOWERED, _RAISED, _ADJUSTED);
      } else {
        layer_off(_LOWERED);
        update_tri_layer(_LOWERED, _RAISED, _ADJUSTED);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISED);
        update_tri_layer(_LOWERED, _RAISED, _ADJUSTED);
      } else {
        layer_off(_RAISED);
        update_tri_layer(_LOWERED, _RAISED, _ADJUSTED);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUSTED);
      } else {
        layer_off(_ADJUSTED);
      }
      return false;
      break;
  }
  /* Doesn't support key repetion or both shifts simultaneously */
  if (layer_state_is(_SHIFTED) && record->event.pressed) {
    if ((KC_1 <= keycode && keycode <= KC_0) || keycode == KC_GRV) {
      unregister_shift();
      tap_code(keycode);
      register_shift();
      return false;
    }
    if (keycode == KC_AT) {
      tap_code(KC_6); /* Caret */
      return false;
    }
    if (keycode == KC_AMPR) {
      tap_code(KC_5); /* Percent */
      return false;
    }
    if (keycode == KC_DLR) {
      tap_code(KC_GRV); /* Tilde */
      return false;
    }
  }
  return true;
}
