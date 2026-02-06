#include "triangle.h"

unsigned char is_equilateral(triangle_t t)
{
    if (!is_triangle(t)){return 0;}
    return (t.a == t.b) && (t.a == t.c);
}
unsigned char is_isosceles(triangle_t t)
{
    if (!is_triangle(t)){return 0;}
    return (t.a == t.b) || (t.a == t.c) || (t.b == t.c);
}
unsigned char is_scalene(triangle_t t)
{
    if (!is_triangle(t)){return 0;}
    return (t.a != t.b) && (t.a != t.c) && (t.b != t.c);
}
unsigned char is_triangle(triangle_t t)
{
    if ((t.a <= 0) || (t.b <= 0) || (t.c <= 0)){return 0;}
    if ((t.a + t.b <= t.c) || (t.a + t.c <= t.b) || (t.b + t.c <= t.a)){return 0;}
    return 1;
}