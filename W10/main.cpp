#include <iostream>
#include "Polygon.h"
#include "Point.h"
#include <vector>
#include <iomanip>
using namespace std;

int main()

{ Point p1, p2(0, 1), p3(1, 0);
  Polygon poly1(vector<Point>{ p1, p2, p3 });
  Point p;
  if (poly1.get_vertex(2, p)) { p.show(); cout << ' '; }
  else cout << "vertex not found! ";
  if (poly1.get_vertex(0, p)) { p.show(); cout << ' '; }
  else cout << "vertex not found! ";
  cout << '\n'; }