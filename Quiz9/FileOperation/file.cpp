#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream infile("Q2.c");
  ofstream outfile("out.txt");
  string name;
  int i=0;
  int k=0;
  while(getline(infile,name)){
    i=0;
    while(name[i] != '\0'){
    if(name[i] == '/'){
      k=i+3;
      while(name[k] != '\0')
      outfile<<name[k++];
      outfile<<endl;
      break;
}      i++;
                          }

}

  outfile.close();
}
