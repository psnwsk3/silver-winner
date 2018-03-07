#include "point.h"
#include <cmath>
point::point()
{

}
point::point(float x, float y)
{
    this->x=x;
    this->y=y;
}
float point::get_x()
{
    return x;
}
float point::get_y()
{
    return y;
}

void point::move(point p2)
{
    x=p2.get_x()+x;
    y=p2.get_y()+y;
}
float point::distance(point p1, point p2)
{
    float dis;

    dis = sqrt(((p2.get_x()-p1.get_x())*(p2.get_x()-p1.get_x()))+((p2.get_y()-p1.get_y())*(p2.get_y()-p1.get_y())));

    return dis;
}
