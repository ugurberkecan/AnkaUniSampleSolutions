//Copy constructor is called when a new object is created from an existing object, as a copy of the existing object
// yani bir obje oluştugunda direk eşitlenirse copy constructor olur diğer durumda assign gerçekleşir.


#include <iostream>
using namespace std;
class Ratio{
public:
  Ratio(){}
  Ratio(int a,int b):num(a),den(b){}
  Ratio(const Ratio &r):num(r.num),den(r.den){
  cout<<"you called copy constructor "<<endl;
}
  int getnum(){
    return num;
  }
  int getden(){
    return den;
  }
private:
  int num;
  int den;
};
int main(){
  Ratio a(5,4);
  Ratio b;
  cout << " " << c.getnum() << " " << c.getden() <<endl;
}
