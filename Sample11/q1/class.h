#include <iostream>
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


public:
              string talk(){
                return "havhav";
              }
