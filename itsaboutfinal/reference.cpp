#include <iostream>
using namespace std;
int &max(int &a,int &b){
    return a>b?a:b;
}
int main(){

  int a=4;
  int &r=a;
  int &k=a=a+1;//&k=a++ bu tarz yaptığımız zaman yanlış.
  r=max(k,a);
  cout << r <<endl;
  cout << "r nin adresi "<< &r << endl;
  cout << "a nin adresi "<< &a << endl;
  cout << k <<endl;


  return 0;
}
