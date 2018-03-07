#ifndef POINT_H
#define POINT_H


class point
{
    private:

        float x;
        float y;

    public:

        point();
        point(float x, float y);
        float get_x();
        float get_y();
        void move(point p2);
        float distance(point p1, point p2);

};

#endif // POINT_H
