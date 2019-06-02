#include <iostream>
using namespace std;
class Foo{
  int a;
public:
  Foo() { a=99;}
  operator int();
};
Foo::operator int(){
  return a;
}
int main(){

Foo f;
int i=f;

cout << i << endl;




  return 0;
}
