#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int eggs) {
     unsigned int eggs_found = 0;
     unsigned int mask = 1;

    while (mask != 0) {
        if (eggs & mask)
            eggs_found++;
        mask <<= 1;
    }
    return eggs_found;
}
