#include <iostream>
#include <string>
using namespace std;
int readInt(){
  char ch;
  int n;

  while(cin.get(ch)){
    if(ch >= '0' && ch <= '9'){
      cin.putback(ch);
      cin >> n;
      break;
    }

  }
    return n;
}
int main(){

   int m=readInt();
   int n=readInt();


  cin.ignore(80,'\n');
  cout << m << "+" << n << "=" << m+n << endl;

}
