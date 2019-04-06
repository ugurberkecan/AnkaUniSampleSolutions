#include "PointSet.h"
#include "Point.h"

PointSet::PointSet(){};
void PointSet::insert(Point x){
  int i=0;
  p[i++]=x;
}
void PointSet::delete_point(Point x){
  int k=search(x);
  if(k != -1){
    p[k].setX(-1);
    p[k].setY(-1);
  }
}
int PointSet::search(Point x){
  static int counter=0;
  for(counter;counter<10;counter++){
    if(p[counter].getX()== x.getY() && p[counter].getY() == x.getY() ){
      return counter;
}

  }
      return -1;
}
void PointSet::print(){
  for(int i=0;i<10;i++){
    if(p[i].getX() >= 0 && p[i].getY >= 0)
    p[i].print();
  }
}
