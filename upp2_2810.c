/* 
   Exercise 2: Friday 28 October
   1) Declare a pointer z that point to an integer m initialized to 10.
   2) Print out the address of m.
   3) Print the value of m using the pointer z.
   4) Print out the address of z.

*/
#include <stdio.h>

int main(){
  int m=10,*z=&m;

  printf("Address of m:%p\n",&m);
  printf("Value of m using pointer z:%d\n",*z);
  printf("Address of the pointer z:%p\n",&z);
  
  return 0;
}
   
