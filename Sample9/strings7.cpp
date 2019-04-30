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
  int counter=0;
  int i=0;
  int counter2=0;
  int value=0;
  while(string1[counter]!= '\0'){
    counter++;
  }
  counter--;
  while(string2[counter2]!= '\0'){
    counter2++;
  }
  counter2--;
  for(int k=0;k<counter2+1;k++){
  for(i;i<counter+1;i++){
    value=0;
    if(string1[i] == string2[k]) {                // computer ,put
      int m=i+1;
      value++;
      for(int p=k+1;p<counter2+1;p++){

        if(string1[m++] == string2[p]){
          value++;
        }
          else {
            break;
          }
          if(value == counter2+1)
              return i+1;
        }

      }

    }

    }
  }
