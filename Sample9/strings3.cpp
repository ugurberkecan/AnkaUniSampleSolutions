
// 3. Write a program to count number of words in string. (String-deki kelime sayısını
// hesaplayan programı yazınız.)
// Ex: computer engineering
//

#include <iostream>

using namespace std;

int main(){
  string s1;
  int counter=0;
  int i=0;
  int reelcounter=0;

getline(cin,s1);
  while( s1[counter] != '\0'){
  if(s1[counter] == ' '){
      reelcounter++;
  }
      counter++;
}
cout<<reelcounter+1;

return 0;
}
