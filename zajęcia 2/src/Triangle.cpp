#include "triangle.h"
#include <cmath>

triangle::triangle(point a, point b, point c)
{
   this->a=a;
   this->b=b;
   this->c=c;
}
float triangle::perimeter()
{
    float peri = a.distance(a,b)+b.distance(b,c)+c.distance(a,c);

    return peri;
}
float triangle::area()
{
    float peri = perimeter()/2;
    float P = sqrt((peri-a.distance(a, b))*(peri-b.distance(b, c))*(peri-c.distance(a, c)));

    return P;
}

