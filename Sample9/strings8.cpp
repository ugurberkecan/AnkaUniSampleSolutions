// 8. Write a program to convert a string in lowercase. (Verilen stringi küçük harfe
// çeviren programı yazınız.)

#include <iostream>

using namespace std;

int main(){
  string s1;
  int counter=0;
  int lower;
getline(cin,s1);
  lower='a'-'A';
  while( s1[counter] != '\0'){
  s1[counter]=s1[counter]+lower;
  counter++;
}
cout <<s1;
return 0;
}
