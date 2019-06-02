#include <iostream>
using namespace std;
class X{
public:
   virtual void f(){cout << " x cagirildi"<<endl;} // virtual kullanarak subclasslara ulaşma imkani sagliyoruz.
};
class Y:public X{
public:
  void f(){cout << " y cagirildi"<<endl;}
};
int main(){
X x;
Y y;
X *p=&x;
p->f();
p=&y;
p->f();
}
