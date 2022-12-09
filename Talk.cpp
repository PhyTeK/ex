#include <iostream>
#include <string>
#include "talk.h"
//#include "Animal.h"

using namespace std;

int main(){
  Dog d1,d2;
  Snake sn1,sn2;

  d1.setName("Fido");
  d1.setSound("Woof");
  sn1.setName("Boss");

  d1.getName();
  d1.talk();

  sn1.getName();
  
  return 0;
}
  
  
