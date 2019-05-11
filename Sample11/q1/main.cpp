#include <iostream>
#include "class.h"

using namespace std;

int main(){
  Animal yilan;
  yilan.setName("anaconda");
  cout << yilan.getName()<<endl;
  Dog kopek;
  Bird kus;
  kopek.setName("Kangal");
  cout<< kopek.getName()<<endl;
  cout << kus.talk()<<endl;
  cout << kopek.talk()<<endl;
  kus.setName("boncuk");
  cout<< kus.getName()<<endl;

  return 0;
}
