#include "resistor_color_trio.h"

#define K 1000
#define M 1000000
#define G 1000000000

resistor_value_t color_code(resistor_band_t colors[]) {
    int value = (colors[0] * 10) + colors[1];

    long long ohms = value;
    for (int i = 0; i < (int)colors[2]; i++) {
        ohms *= 10;
    }

    resistor_value_t result;

    if (ohms >= G) {
        result.value = ohms / G;
        result.unit = GIGAOHMS;
    } else if (ohms >= M) {
        result.value = ohms / M;
        result.unit = MEGAOHMS;
    } else if (ohms >= K) {
        result.value = ohms / K;
        result.unit = KILOOHMS;
    } else {
        result.value = ohms;
        result.unit = OHMS;
    }

    return result;
}