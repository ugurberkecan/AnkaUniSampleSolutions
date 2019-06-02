#include <iostream>
using namespace std;
class Person{
public:
  Person(string x):name(x){}
  virtual void print(){cout << "My name is "<< name << endl;}
protected:
  string name;
};
class Student:public Person{
public:
  Student(string x,float y):Person(x),gpa(y){}


  void print(){cout << "My name is " << name << " " <<"My GPA is " << gpa << endl;}
private:
  float gpa;
};
class Prof:public Person{
public:
  Prof(string x,int y):Person(x),pub(y){}
  void print(){cout << "My name is "<< name <<" "<< "Publications number" << " "<< pub <<endl;}
private:
  int pub;
};
int main(){
  Person *p;
  Person x("Ali");
  p=&x;
  p->print();
  Student y("Ayse",2.42);
  p=&y;
  p->print();
  Prof z("Ugur",100);
  p=&z;
  p->print();
}
