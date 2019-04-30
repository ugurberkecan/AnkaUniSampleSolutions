
// // 9. Write a program to convert a string in uppercase. (Verilen stringi büyük harfe
// çeviren programı yazınız.)
#include <iostream>

using namespace std;

int main(){
  string s1;
  int counter=0;
  int upper;
cin >> s1;

  cout << upper << endl;
  while( s1[counter] != '\0'){
  s1[counter]=s1[counter]-upper;
  counter++;
}
cout <<s1;
return 0;
}
