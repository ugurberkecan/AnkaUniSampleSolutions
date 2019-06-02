#include <iostream>
using namespace std;
class Adam{
  Adam(){
    cout << "olustu"<<endl;
  }
  ~Adam(){
    cout << "yikildi"<<endl;
  }
}
int main(){
  Adam adam1;
  Adam adam2;
  {
    Adam adam3;
  }
  cout << "parantezlerden ciki"

}
