/* 
   Exercise 14: Pointers as function arguments

   1) Create a function declare as the following:
      void fun(char *);
      And print the content of a string (array of characters).

   2) Call fun from main with "hello" as argument.

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void fun(char *);

void fun(char * pt){
  printf("%s\n",pt);
}

int main(){
  char str[]="hello";

  fun(str);

  return 0;

}
