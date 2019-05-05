#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include "Market.h"

using namespace std;

#define SIZE 10

void writeToFile( Market* urunler, string fileName ){
  int i=0;
  ofstream thefile(fileName);
  while (i<SIZE){
    thefile << urunler[i].getID()<<" "<<urunler[i].getMiktar()<<endl;
    i++;
  }
}
Market* readFromFile( string fileName )
{
  ifstream theFile(fileName);
  int counter=0;
  int id;
  double miktar;
  Market *item=new Market[SIZE];
  while(theFile>>id>>miktar){
    item[counter].setID(id);
    item[counter].setMiktar(miktar);
    counter++;
}
  return item;


}
Market* satinAl(Market* urunler, int id, double alis)
{
  int i=0;
  double deger=0;
  for(i;i<SIZE;i++){
      if( urunler[i].getID()== id ){
        deger=urunler[i].getMiktar()-alis;
        break;
      }
}
      urunler[i].setMiktar(deger);
      return urunler;
}


void printStok( Market* urunler )
{
  int i=0;
  while(i<SIZE)
    cout << urunler[i].getID() << " " << urunler[i++].getMiktar()<<endl;

}

int main(){
	Market* urunler=new Market[SIZE];
	int id;
	double miktar;
  urunler = readFromFile("Market");

	printStok( urunler );
	cout<<"Almak istediginiz urunun ID'sini giriniz:"<<endl;
	cin>>id;
	cout<<"Almak istediginiz miktari giriniz:"<<endl;
	cin>>miktar;
  cout <<endl;
	urunler=satinAl(urunler, id, miktar);
	writeToFile( urunler,"Market");
	printStok( urunler );
	return 0;

}
