#include <iostream>
using namespace std;
class widget
{
public:
  widget(){++count;}
  ~widget(){--count;}
static int numwidget(){return count;}
private:
  static int count;
};
int widget::count=0;
int main()
{
  widget x,y;
  cout << "now there are "<<x.numwidget()<<"objects\n";
  {
    widget x,y,z,w;
    cout << " now .."<<w.numwidget()<<"objects\n";
  }
  cout << "now "<<y.numwidget()<<"object\n";
  return 0;
}
