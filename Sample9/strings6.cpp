// 6. Write a program to check a string is palindrome or not. (bir string-in palindrome
// olup olmadığını kontrol eden programı yazınız.)
// Ex: kabak
// String is a palindrome.

#include <iostream>

using namespace std;

int main(){
int ispalindrome(string string1);
  string s1;
  cin >> s1;

  if(ispalindrome(s1)){
    cout << "Yes";
  }else {
    cout <<"no";
  }

  return 0;
}
int ispalindrome(string string1){
  int counter=0,tempcounter;
  while(string1[counter++] != '\0'){}
  tempcounter=counter-2;
  for(int i=0;i<counter/2.0;i++){
      if(  string1[i] != string1[tempcounter--]   ){
        return 0;
      }
  }
  return 1;

}
