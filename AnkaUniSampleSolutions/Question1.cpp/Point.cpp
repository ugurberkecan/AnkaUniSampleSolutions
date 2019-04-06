#include "Point.h"

void Point::setX(int a){
  x=a;
}
void Point::setY(int b){
  y=b;
}
int Point::getX(){
  return x;
}
int Point::getY(){
  return y;
}
Point::Point(int sx,int sy){
  x=sx;
  y=sy;
}
