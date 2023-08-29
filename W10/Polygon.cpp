#include "Polygon.h"
#include <iostream>


Polygon:: Polygon()
{
    polygon_ = {};

}

Polygon::Polygon(std::vector <Point> polygon)
{
    polygon_ = polygon;

}

bool Polygon::get_vertex(int n, Point &p) const
{
    n = n-1;
    if(size_t(n) > polygon_.size()-1) return false;
    p = polygon_[n];
    return true;

}


 void Polygon::add_vertex(int n, Point p)
{
    if(n <= int(polygon_.size()))
    {
        polygon_.insert(polygon_.begin()+n-1,p);

    }

}

double Polygon::perimeter()
{
    double res = 0;

    for(size_t i = 0; i < polygon_.size()-1;i++)
    {
        res+= polygon_[i].distance(polygon_[i+1]);
    }

    res+= polygon_[0].distance(polygon_[polygon_.size()-1]);

    return res;
}

void Polygon::show() const
{
    std::cout << "{";
    for (size_t i = 0; i < polygon_.size();i++)
    {
        polygon_[i].show();


    }
    std::cout << "}";
}