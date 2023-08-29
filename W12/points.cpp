
#include <iostream>
#include "Point.h"

Point::Point()
{
    this->x_ = 0;
    this->y_ = 0;
}

Point::Point(int x, int y)
{
    this->x_ = x;
    this->y_ = y;
}

Point::Point(const Point& p)
{
    this->x_ = p.x_;
    this->y_ = p.y_;
}

int Point:: get_x() const
{
    return x_;
}

int Point:: get_y() const
{
    return y_;
}

Point& Point::operator=(const Point& p)
{
    x_ = p.x_;
    y_ = p.y_;
    return *this;
    
}

Point Point::operator+(const Point& p) const
{
    Point soma(x_+p.x_,y_+p.y_);
    return soma;


}
Point& Point::operator+=(const Point& p)
{
    x_ += p.x_;
    y_ += p.y_;
    return *this;


}
Point Point::operator*(int v) const 
{
    Point product;
    product.x_ = this->x_ * v;
    product.y_ = this->y_ * v;
    return product;
}

Point operator*(int x, const Point& p) // "left" multiplication by scalar
{
    return Point(x* p.get_x(), x * p.get_y() );



}
std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << "(" << p.get_x() << "," << p.get_y() << ")";    

    return os;
}

