#ifndef LIGHT_UTILS_INCLUDED
#define LIGHT_UTILS_INCLUDED

#include "board.h"
#include "hal.h"

/*
    Structs
*/
// Struct defining an LED and its RGB color components
typedef union {
  struct {
    /* Little endian ordering to match uint32_t */
    uint8_t blue, green, red;
    uint8_t align;
<<<<<<< HEAD
  } p;
  /* Index access: 0 - blue, 1 - green, 2 - red */
=======
  } p; /* parts */
  /* Parts vector access: 0 - blue, 1 - green, 2 - red */
>>>>>>> b1d1305637407dcf3f3ef7bfc41f7f224ffc14b8
  uint8_t pv[4];
  /* 0xrgb in mem is b g r X */
  uint32_t rgb;
} led_t;

// Calculate position within the ledColors array
#define ROWCOL2IDX(row, col) (NUM_COLUMN * (row) + (col))

/*
    Function Signatures
*/
void setAllKeysColor(led_t *ledColors, uint32_t color);
void setModKeysColor(led_t *ledColors, uint32_t color);
void setKeyColor(led_t *key, uint32_t color);

#endif
