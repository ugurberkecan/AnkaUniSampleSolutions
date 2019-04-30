// 4. Write a program to concatenate one string contents to another. (İki stringi
// birleştiren programı yazınız.)
// Ex: computer
// engineering
// computer engineering



#include <iostream>

using namespace std;

int main(){
  string s1;
  string s2;
  int counter=0;
  int i=0;
  int k=0;
  cin >> s1;
  cin >> s2;
  while( s1[counter] != '\0'){
  counter++;
}s1[counter++]=' ';
  while(s2[i] != '\0'){
      s1[counter++]=s2[i++];

  }s1[counter]='\0';
  while(s1[k] != '\0'){
    cout << s1[k++];
}

}
