#include <iostream>
#include <string>
using namespace std;
class Employee{
protected:
  string ad,soyad,gorev;
  int dogumyili,aylikmaas,sicilno;
public:
  Employee(string isim,string s,int d,int a,string g,int sicil):ad(isim),soyad(s),dogumyili(d),aylikmaas(a),gorev(g),sicilno(sicil){}
  friend ostream& operator<<(ostream& os, const Employee& object);
};
class UniversityMember:public Employee{
public:
  UniversityMember(string isim,string s,int d,int a,string g,int sicil):Employee(isim,s,d,a,g,sicil){}

};
ostream& operator<<(ostream& os,const Employee& object){
  os << "First Name:" <<object.ad<<endl<<"Last Name:"<<object.soyad<<endl<<"Date of Birth:"<<object.dogumyili<<endl<<"Monthly Salary:"<<object.aylikmaas<<endl;
  os << "Position:"<<object.gorev<<endl<<"Registry Number:"<<object.sicilno<<endl;
}
