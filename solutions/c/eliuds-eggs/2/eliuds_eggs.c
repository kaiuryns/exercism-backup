#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int eggs) {
     unsigned int eggs_found = 0;

    while (eggs > 0) {
        if (eggs % 2 == 1)
            eggs_found++;
        eggs >>= 1;
    }
    return eggs_found;
}
