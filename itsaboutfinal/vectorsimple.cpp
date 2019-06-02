#include <iostream>
#include <vector>
#define SIZE 8
using namespace std;
void load(vector<string> &v){
  v[0]="ezel";
  v[1]="memati";
  v[2]="eysan";
  v[3]="polat";
  v[4]="alikemal";
  v[5]="pempe";
  v[6]="sinan";
  v[7]="özcandeniz";
}
void print(vector<string> &v ){
  for(int i=0;i<v.size();i++)
    cout << v[i] << endl;
}

int main(){
  vector <string> v(SIZE);
  load(v);
  print(v);
  v.push_back("güllü");

}
