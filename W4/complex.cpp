#include <iostream>
#include <math.h>
#include "complex.h"
#include <cmath>
using namespace std;

void add(const complex &a, const complex &b, complex &r)
{
  r.y = a.y + b.y;
  r.x = a.x + b.x;

 
}

void mul(const complex &a, const complex &b, complex &r)
{
  r.x = (a.x * b.x) - (a.y * b.y);
  r.y = (a.x * b.y) + (b.x * a.y);
  
}

double norm(const complex &c)
{
  return sqrt(pow(c.x, 2) + pow(c.y, 2));
}

