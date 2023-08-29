#include <iostream>
#include <cmath>
#include "Figure.h"
#include <iomanip>
#include <vector>

using namespace std;
 
class Circle: public Figure {
public:
    Circle(double x_center, double y_center, double radius): Figure(x_center,y_center),radius_(radius) {}
    void draw() const{
        cout << 'C' << '('<< this->x_center_ << ',' << this->y_center_ <<')' << '(' << radius_ << ')';
    }

private:
    double radius_;
};

class Rectangle: public Figure {
public:
   Rectangle(double x_center, double y_center, double width, double height): Figure(x_center,y_center),width_(width),height_(height) {}
    void draw() const{
        cout << 'R' << '('<< this->x_center_ << ',' << this->y_center_ <<')' << '(' << width_ << ',' << height_ << ')';
    }
private:
    double width_, height_;
};

