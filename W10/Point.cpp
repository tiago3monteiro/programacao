#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point()
{
    y_ = 0;
    x_ = 0;
}

Point:: Point(int x, int y)
{
    y_ = y;
    x_ = x;
}

int Point::get_x()
{
    return x_;


}

int Point::get_y()
{
    return y_;


}

void Point::show() const
{
    std::cout << "(" << x_ << "," << y_ << ")";
}

double Point::distance(Point other)
{
    double x = pow(other.get_x() - x_,2);
    double y = pow(other.get_y() - y_,2);
    return sqrt(x+y);

}