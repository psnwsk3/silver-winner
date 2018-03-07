#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"

class triangle
{
        point a, b, c;

    public:

        triangle(point a, point b, point c);
        float perimeter();
        float area();
};

#endif // TRIANGLE_H
