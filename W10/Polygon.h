#ifndef POLYGON_H
#define POLYGON_H

#include <vector>
#include "Point.h"
class Polygon
{
    private:
        std:: vector <Point> polygon_;

    public:
        Polygon();
        Polygon(std::vector <Point> polygon);
        bool get_vertex(int n, Point &p) const;
        void add_vertex(int n, Point p);
        double perimeter();
        void show() const; 

};

#endif