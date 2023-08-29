#include "Solid.h"

class Cylinder: public Solid
{
    public:
    Cylinder(const point& c, double radius, double height): Solid(c), radius_(radius), height_(height) { }; 
    double radius() const
    {
        return radius_;
    }

    double height() const
    {
        return height_;
    }

    virtual double area() const
    {
        return 2* M_PI *radius_ * (radius_ + height_);

    }
    private:
        double radius_;
        double height_;

};

int main()
{ const Cylinder c({0.1, 2.3, 4.5}, 1.2, 3.4);
  cout << c.center() << ' ' 
       << c.radius() << ' ' 
       << c.height() << ' ' 
       << c.area() << endl; }