// 5. Write a program to compare two strings they are exact equal or not. (İki string-in
// eşit olup olmadığını kontrol eden programı yazınız.)
// Ex: computer
// engineering
// strings are not equal.

#include <iostream>

using namespace std;

int main(){
int isequal(string string1,string string2);
  string s1;
  string s2;
  cin >> s1;
  cin >> s2;
  if(isequal(s1,s2)){
    cout << "Equal";
  }else {
    cout <<"Not equal";
  }

  return 0;
}
int isequal(string string1,string string2){
  int counter=0,i=0;
  while(string1[counter++] != '\0'){}
  counter--;
  while(string2[i++] != '\0'){}
  i--;
  return (counter == i) ? 1 : 0;
}
