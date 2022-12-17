/* 
   Exercise 8

   1) Create a class "Box" with one private member named "colour"
   having datatype string and two public members named "weight" and
   "height" having datatype double.

   2) Intentiate two objects "box1" and "box2" from class "Box"

   3) Initialize each public members "height" and "weight" of boxes "box1" and
   "box2" to some values.

   4) Create a "setter" function member to set the private member
   "colour" of both boxes.
   
   5) Create a "getter" function member to return the colour of a box object

   6) Print all members of all boxes

*/

#include <iostream>
#include <string>
using namespace std;

class Box{
 private:
  std::string colour;

 public:
  double weight,height;
  
  void setColour(string colour){
    this->colour=colour;
  }
  std::string getColour(){
    return colour;
  }

};

int main(){
  Box box1,box2;  //Intentiate two objects
  
  box1.weight=1.2345;
  box1.height=23.34;
  box2.weight=10.2345;
  box2.height=2322.34;
  
  box1.setColour("blue");
  box2.setColour("orange");

  cout<< box1.weight << endl;
  cout<< box1.height << endl;
  cout<< box1.getColour()<<endl;
  cout<< box2.weight << endl;
  cout<< box2.height << endl;
  cout<< box2.getColour()<<endl;

  return 0;
}
