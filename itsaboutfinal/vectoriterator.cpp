#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string>::iterator it;
typedef vector<string> strings; // vector<string> ifadesine strings dedim.
typedef strings::iterator sit; // iterator type ını sit yaptım artık iterator tanımlarken sit dicez.
void print(strings v){

  for(it= v.begin();it != v.end();it++)
    cout << *it <<endl;
}
int main() {
  vector<string> v={"ali","fatma","ayse","sadik","efe","barkin","omer","zeki"};
  strings k;
  k=v;
  sort(v.begin(),v.end());
  print(v);
  cout << "En ondeki  " << v.front()<<endl;
  cout << "En sondaki  " << v.back()<<endl;
  v.pop_back();
  cout << "En sondaki  " << v.back()<<endl;
  v.erase(v.begin()+1);  // beginden sonraki indexdekini siliyor.
  cout << endl <<endl;
  print(v);
  v.erase(v.begin()+1,v.end()); // beginden 1 sonrakinden end e kadar siliyor.
  cout << endl <<endl;
  print(v);
  v.insert(v.begin()+1,"barkin");
  cout << endl <<endl;
  print(v);
  cout <<v.size() <<"  eleman  kalmistir efendim."<< endl;
  sit a=find(v.begin(),v.end(),"barkin");
  cout << *a <<endl;
  cout <<"0. eleman " <<v.at(0)<<endl;


  return 0;
}
