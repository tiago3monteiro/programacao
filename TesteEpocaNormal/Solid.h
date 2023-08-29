#ifndef __SOLID_H__
#define __SOLID_H__

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

struct point {
  double x, y, z;
};

ostream& operator<<(ostream& os, const point& p) {
  return os << fixed << setprecision(3) 
         << '(' << p.x << ',' << p.y << ',' << p.z << ')';
}

class Solid {
public:
  Solid(const point& c) : center_(c) { }
  const point& center() const { return center_; }
  virtual double area() const = 0;
private: 
  point center_; 
};

#endif