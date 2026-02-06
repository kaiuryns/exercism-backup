#include "darts.h"

#include <math.h>

uint8_t score(coordinate_t pos)
{
    float distance = sqrt((pos.x * pos.x) + (pos.y * pos.y));

    if (distance <= INNER)
        return POINTS_10;
    else if (distance <= MIDDLE)
        return POINTS_5;
    else if (distance <= OUTER)
        return POINTS_1;
    
    return POINTS_0;
}