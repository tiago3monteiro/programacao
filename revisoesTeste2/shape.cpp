#include "Shape.h"
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

class Circle: public Shape
{
    public:
        Circle(const point& center, const double radius): Shape(center) { radius_ = radius;}
        virtual double area() const {  return M_PI * radius_ * radius_; }
        virtual double perimeter() const { return 2* M_PI * radius_;}
        virtual bool contains(const point& p) const 
        {
            double dx = p.x-this->get_center().x;
            double dy = p.y-this->get_center().y;
            return sqrt(pow(dx,2)+pow(dy,2))<=radius_;
        }
    private:
        double radius_;

};

class Rectangle: public Shape
{
    public:
        Rectangle(const point& center, const double width, const double height): Shape(center){ width_ = width; height_ = height;}
        virtual double area() const {  return width_ * height_; }
        virtual double perimeter() const { return 2 * width_ + 2 * height_;}
        virtual bool contains(const point& p) const 
        {
            double left = this->get_center().x - width_/2; 
            double right = this->get_center().x + width_/2; 
            double top = this->get_center().y - height_/2;
            double bot = this->get_center().y + height_/2;
            return  p.x >= left && p.x <= right && p.y >= top && p.y <= bot;
        }
    private:
        double width_, height_;

};

