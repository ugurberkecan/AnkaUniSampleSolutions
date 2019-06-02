#include <iostream>
using namespace std;
class Date {
  friend istream& operator >>(istream&,Date &);
  friend ostream& operator <<(ostream&,const Date&);
public:
  Date(int m=0,int d=0,int y=0):month(m),day(d),year(y){}
  void setDate(int m,int d,int y){
    month=m;
    day=d;
    year=y;
  }
  friend class Person; // ***bu çok önemli ayrıca date classının yukarıda olması mutlaka gerekir.*****
private:
  int month,year,day;
};
class Person{
public:
  Person(char *n=" ",char *nat="USA",int s=1):name(n),nationality(nat),sex(s){}
  void printname(){cout << name;}
  void printNationatily(){cout << nationality;}
    void setDOB(int m,int d,int y){dob.setDate(m,d,y);}
  void setDOD(int m,int d,int y){dod.setDate(m,d,y);}
  void printDOB(){cout << dob <<endl;}
  void printDOD(){cout << dod <<endl;}
private:
  string name,nationality;
  Date dob,dod;
  int sex;
};

istream& operator >>(istream& in,Date &a){
  in >> a.day >> a.month >> a.year;
  return in;
}
ostream& operator <<(ostream& out ,const Date&a){
  out << a.month << " / " << a.day << " / " << a.year;
  return out;
}
int main(){

Person ali;
ali.setDOB(3,2,1995);
cout << "World WAR 1 Ended ON  ";
ali.printDOB();


}
