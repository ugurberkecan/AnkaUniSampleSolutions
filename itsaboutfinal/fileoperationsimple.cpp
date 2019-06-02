#include <iostream>
#include <fstream>
using namespace std;

int main(){
  char ch;
  int count;
  int number;
  ifstream infile("write.txt");
  ofstream outfile; // dosya oluşturup icine yazıyoruz
  outfile.open("write.txt");
  for(count=1;count<5;count++)
      outfile << count*2;
  outfile.close();
  count =0;


  while(infile>>number){
    count++;
    infile >> number;
      
}


  cout << count ;
}
