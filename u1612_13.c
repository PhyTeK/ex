/* 
   Exercise 13: Pointers as function arguments

   1) Create a struct named Box inside main.

   2) Create a function "fun" that print out all
       members of the struct Box.

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Box{
    int id;
    char name[20];
    char *user; //Dangling pointer
    char *pass;
};

void fun(struct Box *);

void fun(struct Box *pt){
  printf("id=%d\n",pt->id);
}

int main(){
  struct Box b1,b2,*ptbx;
  b1.id=123;
  strcpy(b1.name,"Hello");
  b1.user=&b1.name[1];

  fun(&b1);

  return 0;

}
