#include <iostream>
using namespace std;

int main(){
  int *ptr_a;
  int *ptr_b;
  int c=4;
  int d=7;
  ptr_a=&c;
  ptr_b=ptr_a;

  cout << *ptr_a << " "<<*ptr_b<<endl; // 4 - 4
  ptr_b=&d;
  cout << *ptr_a << " "<<*ptr_b<<endl; // 4 - 7
  *ptr_a=*ptr_b;
  cout << *ptr_a << " "<<*ptr_b<<endl; // 7-7
  cout << c << " " << d <<endl;  // 7-7

}
