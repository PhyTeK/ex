/* Exercise 3: Friday 28 October
   1) Declare and define and integer m=30, a floating point fx=300.60
      and a character cht='z'.
   2) Print the addresses of m, fx and cht.
   3) Print the values at these addresses.
   4) Create 3 pointers pt1, pt2 and pt3 that point on the integer m,
      the floating point fx and the character cht.
   5) Print the values of m, fx and cht without using pointers.
   6) Print their values of m, fx and cht using pointers pt1, pt2, pt3.

*/

#include <stdio.h>

int main(){
  int m=30;
  float fx=300.60;
  char cht='z';

  puts("Answer to Q2");
  printf("Address of m:%p\n",&m);
  printf("Address of fx:%p\n",&fx);
  printf("Address of cht:%p\n",&cht);

  int *pt1;
  float *pt2;
  char *pt3;

  pt1=&m;
  pt2=&fx;
  pt3=&cht;

  puts("Answer to Q5");
  printf("Value of m without using pointer:%d\n",m);
  printf("Value of fx without using pointer:%f\n",fx);
  printf("Value of cht without using pointer:%c\n",cht);


  puts("Answer to Q6");
  printf("Value of m using pointer:%d\n",*pt1);
  printf("Value of fx using pointer:%f\n",*pt2);
  printf("Value of cht using pointer:%c\n",*pt3);

  return 0;
}
