#include "triangle.h"

namespace triangle {

    flavor kind(double a, double b, double c)
    {
        if (a <= 0 || b <= 0 || c <= 0)
        {
            throw std::domain_error("triangles_with_no_size_and_negative_size_are_illegal");
        }

        if (a + b < c || b + c < a || c + a < b)
        {
            throw std::domain_error("triangles_violating_triangle_inequality_are_illegal");
        }
            
        if (a == b && b == c && c == a)
        {
            return triangle::flavor::equilateral;
        }

        if ((a == b && c != a) || (b == c && a != b ) || (c == a && b != c))
        {
            return triangle::flavor::isosceles;
        }

        return triangle::flavor::scalene;
    }
    

}  // namespace triangle
