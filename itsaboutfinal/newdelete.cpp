#include <iostream>
using namespace std;
int main(){
  int i,n;
  int *p;
  cout << "enter number of variables"  << endl;
  cin >> i;
  p=new(nothrow) int [i]; // nothrow eğer burda yeterince yer varsa adresi donduruyor diger turlu null donduruyor.
   if(p == 0){
     cout <<  "error"<<endl;
   }else{
     for(int k=0;k<i;k++)
        cin >> p[k];
   }
   delete p; // bunu yaptığımızda yine print edip 0 basar ama asagıda nullptr e assign ettigimizde hicbir deger döndürmez hata verir.
   p= nullptr;
   for(int k=0;k<i;k++)
    cout << p[k]<<"  ";

      return 0;
    }
