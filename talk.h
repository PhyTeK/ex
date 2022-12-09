#ifndef _TALK_H
#define _TALK_H

#include <string>
#include <iostream>
using namespace std;

class Animal {
private: 
  int age;
  string name;
  string sound;
public: 
  
  
  void setName(string str){
    this->name=str;
  };
    
  void getName(){
    cout<<"My name is: "<<name<<endl;
  };
    
  void setAge(int n){
    this->age=n;
  };
  void getAge(){
    cout<<"My age is: "<<age<<endl;
  };

  void setSound(string snd){
    this->sound=snd;
  }

  string getSound(){
    return this->sound;
  }

};


class Dog: public Animal {
private: 
    string breed;

public: 
    
void getBreed();    
  void talk(){
    cout<<getSound()<<endl;
  };
};


class Snake: public Animal {

 public: 

  void getlength();
    
  void setlength();
    
  void getpoison();
    
  void setpoison();
 private: 
  float length;
  bool poison;
};

#endif 

