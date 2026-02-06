#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

static const resistor_band_t resistor_colors[] = { 
    BLACK, 
    BROWN, 
    RED, 
    ORANGE, 
    YELLOW, 
    GREEN, 
    BLUE, 
    VIOLET, 
    GREY, 
    WHITE
};

static inline int color_code(resistor_band_t color) {
    return color;
}

static inline const resistor_band_t* colors(void) {
    return resistor_colors;
}
#endif
