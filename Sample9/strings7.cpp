  // 7. Write a program to find a substring within a string. If found display its starting
  // position. (Bir string de aranacak alt string-in başlangıç yerini bulan programı yazınız.)
  // Ex: computer put
  // // 4

  #include <iostream>

  using namespace std;

  int main(){
  int foundstring(string string1,string string2);
    string s1="sasaksalbo";
    string s2="sal";
    //cin >> s1;
    //cin >> s2;
    cout << foundstring(s1,s2);
    return 0;
  }
  int foundstring(string string1,string string2){
  int counter=0; //
  int counter2=0;
  int i=0;
  int value=0;
  while(string1[++counter]!= '\0'){}
  while(string2[++counter2]!= '\0'){}
  for(i;i<counter+1;i++){
    if(string1[i] == string2[0])
      {
      value=0;
    for(int k=0;k<counter2;k++)
          {
      if( string1[i+k] == string2[k])
        value++;
        if(counter2 == value)
            return i+1;
          }
      }
  }
}
