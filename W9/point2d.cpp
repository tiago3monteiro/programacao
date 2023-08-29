#include <iostream>
#include <iomanip>
#include <cmath>
#include "Point2d.h"
using namespace std;

void Point2d::translate(const Point2d& t)
{
    this->x += t.get_x();
    this->y += t.get_y();
        
}
double Point2d::distance_to(const Point2d& p) const 
{
    return sqrt(pow((this->x - p.get_x()),2)+pow((this->y - p.get_y()),2));


}
 
