#include <iostream>
using namespace std;
class Point{
public:
  Point(int,int);
  void setX(int);
  void setY(int);
  int getX();
  int getY();
  void print()
  {
    cout << "("<<x<<","<<y<<")"<<endl;
  }
private:
  int x,y;
};
