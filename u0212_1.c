/* Exercise #1

   1) Create a struct named Student with two members:
       * name
       * age
   2) Declare two instances of Student named st1 and st2.
   3) Define/Initialize st1's name to "Dennis" and st1's age to 52.
   4) Print ut name and age for each instances st1 and st2.
   5) Declare two pointers pst1, pst2 whose point to st1 and st2 respectively.
   6) Print out name and age of instances st1 and st2 using pointers *pst1 and *pst2
   7) Do the same using -> operator 
   
*/

#include <stdio.h>

struct Student {
  char name[10];
  int age;
};


int main(){
  struct Student st1={"Dennis",32};
  struct Student st2={"Richie",50};
  
  struct Student *pst1,*pst2;

  pst1 = &st1;  // *pst1 and st1 are equivalent
  pst2 = &st2;  // *pst2 and st2 are equivalent

  printf("%s %d\n",st1.name,st1.age);
  printf("%s %d\n",st2.name,st2.age);

  printf("%s %d\n",(*pst1).name,(*pst1).age);  // (*pst1) <=> st1
  printf("%s %d\n",(*pst2).name,(*pst2).age);  // (*pst2) <=> st2


  // Easier way to do the same with -> operator
  
  printf("%s %d\n",pst1->name,pst1->age);
  printf("%s %d\n",pst2->name,pst2->age);

  // Conclusion: The dot . is used with an instance of a struct
  //             The -> is used with a pointer to a struct
  
  return 0;
}
  
