#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Media{
public:
  virtual void print()=0;
  virtual char const*id()=0;
protected:
  string title;
};
class Book:public Media{
public:
  Book(string a=" ",string p=" ",string i=" "):author(a),publisher(p),isbn(i){
    title="Adam";
  }
  void print(){cout << title << " by" <<author << endl;}
  char const*id(){ return isbn.c_str();}
private:
  string author,publisher;
  string isbn;
};
int main(){
  Book b1("ugur","tamam","okey");
  b1.print();
}
