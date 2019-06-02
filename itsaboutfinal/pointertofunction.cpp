#include <iostream>
using namespace std;
int add(int a,int b){
  return a+b;
}
int del(int a,int b){
  return a-b;
}
int operation(int a,int b,int (*functioncall)(int,int)){
  return (*functioncall)(a,b);
}
int gosterme(int a){
  return a;
}

int main(){
int a=3;
int b=5;
int result;

  cout << operation(a,b,add)<<endl;
  cout << operation(a,b,del)<<endl;
  int (*pointr)(int)=gosterme;
  cout << pointr(a);

 //  cout << result << endl;




  return 0;
}
