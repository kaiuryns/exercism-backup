#ifndef DARTS_H
#define DARTS_H

#define OUTER 100.0
#define MIDDLE 25.0
#define INNER 1.0

#include <stdint.h>

typedef enum
{
    POINTS_0,
    POINTS_1,
    POINTS_5 = 5,
    POINTS_10 = 10
}points_t;

typedef struct
{
    float x;
    float y;
} coordinate_t;

uint8_t score(coordinate_t pos);

#endif
