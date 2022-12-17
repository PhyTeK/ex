/* 
   Exercise 10

   1) Use pointer when you need them!
   2) Create an array arr of 10 double
   3) Using a loop print out the address of all elements 
      of the array arr.
   4) Using a pointer initialize each element of arr.
   5) do the same than 4) without using a pointer.

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000

int main(){
  double arr[MAX]; // Fastest way to work with array
  double * brr;  // Declaration of a pointer
  int i,n,index;
  
  n=MAX;
  printf("Size of a double is: %d\n",sizeof(double));
  brr = malloc(n*sizeof(double));
  arr[232] = 2.0;
  brr[2234] = 1.0;
  *(brr + 132) = 234; // Pointer arithmetic *=Value at the address brr+132
  brr[132] = 234;
  index=132;
  brr[index] = 234;

  for(i=0;i<10;i++)
    printf("The address of arr[%d] is: %p\n",i,&arr[i]);

  for(i=0;i<10;i++)
    printf("The address of brr[%d] is: %p\n",i,&brr[i]);
  
  free(brr);
  return 0;
}
