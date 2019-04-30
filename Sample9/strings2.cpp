// 2. Write a program to display string from backward. (Bir string-i tersine çeviren
// programı yazınınız.)
// Ex: computer engineering
// // gnireenigne retupmoc

#include <iostream>

using namespace std;

int main(){
  string s1;
  int counter=0;
  int i=0;

getline(cin,s1);
  while( s1[counter] != '\0'){
  counter++;
}
for(int i=counter-1;i>=0;i--){
  cout << s1[i];
}

return 0;
}
