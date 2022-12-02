/* Exercise #2 

1) Add a struct Grades inside the Student struct from
   Exercise #1.  struct Grades has tow members date and grade.  The
   date has the following format: "021222" and grade a single
   character e.g.'A'.
      
2) Declare two instances named st1, st2 and initialize all members of
   each instance (name, age, date and grade).

3) Print out all members of each instance st1 and st2.

*/


#include <stdio.h>
#include <string.h>

struct Student {
  char name[10];
  int age;
  struct Grades {
    char date[10];
    char grade;
  } grades;

  struct Student *pk1,*pk2;
};


int main(){
  struct Student st1={"Dennis",32,{"021022",'B'}};
  struct Student st2={"Ritchie",50,{"011121",'A'}};
  struct Grades  gr1={"011022",'A'};
  struct Grades  gr2={"031122",'C'};
  
  struct Student *pst1,*pst2;

  pst1=&st1;  // *pst1 and st1 are equivalent
  pst2=&st2;  // *pst2 and st2 are equivalent


  // Initialize each pointers *pk1 and *pk2
  
  pst2->pk1=pst1;
  pst1->pk2=pst2;
  
  strcpy(pst2->pk1->name,"Kernighan");
  
  printf("%s %d\n",st1.name,st1.age);
  printf("%s %d\n",st2.name,st2.age);

  printf("%s %d\n",(*pst1).name,(*pst1).age);
  printf("%s %d\n",(*pst2).name,(*pst2).age);


  // Easier way to do the same with -> operator
  
  printf("%s %d\n",pst1->name,pst1->age);
  printf("%s %d\n",pst2->name,pst2->age);


  // Conclusion: The dot . is used with an instance of a struct
  //             The -> is used with a pointer to a struct

  
  printf("%s %d %s %c\n",pst1->name,pst1->age,pst1->grades.date,pst1->grades.grade);


  printf("%s %c %s %c\n",pst1->name,pst1->grades.grade,pst1->pk2->name,pst1->pk2->grades.grade);
  printf("%s %c %s %c\n",pst2->name,pst2->grades.grade,pst2->pk1->name,pst2->pk1->grades.grade);
  
  return 0;
}
  
