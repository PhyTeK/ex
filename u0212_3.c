/* 
   Exercise #3
   -----------

   1) Use the Student struct from exercise #1 

   struct Student {
      char name[10];
      int age;
    };
    
    Add a pointer *pts pointing to the same Student struct.
    
    2) Create an array "starr" that may contain five instances of
       Student struct.
    
    3) Create a pointer "*ptstarr" to the array "starr".

    4) Use this pointer to allocate dynamically 100 instances of the
    same struct Student using malloc.
    
    5) Define/Initialise the third instance of "starr" using pointer "*ptstarr".
    
    

*/

/// Array of struct

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Student {
  char name[10];
  int age;
  struct Student *pts;
};


int main(){
  struct Student starr[5];
  struct Student *pstarr;

  enum boolean {false,true};
  
  enum names {Dennis,Richie,Eva,Erik,Mats};

  char *namns[10]={"Linux","Toward"};
  enum names studname;


  enum boolean t;

  t=true;
  
  printf("true=%d\n",t);

  pstarr=(struct Student *)malloc(100*sizeof(struct Student));

  pstarr[3].pts=&pstarr[4];
  
  pstarr[3].age=50;
  strcpy(pstarr[3].name,"Philippe");

  pstarr[4].age=21;

  printf("%s %d %d\n",pstarr[3].name,pstarr[3].age,pstarr[3].pts->age);
  
  free(pstarr);

  int i;

  studname=Eva;

  
  for(i=0;i<5;i++)
    strcpy(starr[i].name,"Dennis");

  for(i=0;i<5;i++)
    printf("%s %d\n",starr[i].name,studname);

  printf("%s %s\n",namns[0],namns[1]);

  
  return 0;
}
