#include <iostream>

using namespace std;

int main(){
  string s1;
  int counter=0;
  getline(cin,s1);
  while( s1[counter] != '\0'){
  counter++;
  }
  cout << counter;
}
