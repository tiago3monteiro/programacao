#include <iostream>
#include <cmath>
#include "Shape.h"
#include <iomanip>

using namespace std;
 
class Circle: public Shape {
public:
    Circle(const point& center, double radius): Shape(center), radius_(radius) {}
    double area() const { return pow(radius_,2)* M_PI;}
    double perimeter() const {return 2*M_PI*radius_;}
    bool contains(const point& p) const{ return sqrt(pow(this->get_center().x-p.x,2)+pow(this->get_center().y-p.y,2)) <= radius_;}

private:
    double radius_;
};

class Rectangle: public Shape {
public:
    Rectangle(const point& center, double width, double height): Shape(center), width_(width),height_(height) {}
    double area() const { return width_ * height_; }
    double perimeter() const {return width_ * 2 + height_*2;}
    bool contains(const point& p) const
    {
        double top = this->get_center().y - (height_/2);
        double bot = this->get_center().y + (height_/2);
        double left = this->get_center().x - (width_/2);
        double right = this->get_center().x + (width_/2);
        return ( p.x >= left && p.x <= right && p.y >= top && p.y <= bot);
    }

private:

    double width_, height_;
};

