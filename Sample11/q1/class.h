#include <iostream>using namespace std;
class Animal{
  protected:
    string name;
     public:
       void setName(string name){
            this->name=name;
          }
            string getName(){
               return name;}
          };
class Bird:public Animal{
public:
              string talk(){
                return "cikcik";
              }
};

class Dog:public Animal{
public:
              string talk(){
                return "havhav";
              }
};
