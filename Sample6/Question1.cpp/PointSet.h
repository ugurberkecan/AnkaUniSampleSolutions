#include <iostream>
#include <math.h>
#include "Point.h"
using namespace std;
class PointSet
{
public:
  PointSet();
  void insert(Point);
  void delete_point(Point);
  int search(Point);
  void print();
private:
  Point p[10];
}
