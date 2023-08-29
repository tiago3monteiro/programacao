#ifndef POINT_H
#define POINT_H

class Point
{
    private: 
        int x_,y_;

    public:

    Point();
    Point(int x, int y);
    int get_x();
    int get_y();
    double distance(Point other);
    void show() const;

};




#endif