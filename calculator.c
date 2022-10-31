/* 
   Using a switch write a C program to display a simple calculator.
   Complete the missing parts in the switch. We want to print the data 3 decimals.
   For example for an addition the output should be:

   2.345 + 1.111 = 3.456

   The calculator should also print out 

   "Error! wrong operator"

   if the operator is not +,-,*, or ^ (pow)
   
*/
#include<stdio.h>
#include<math.h>

int main()
{
  float n1,n2; 
  char operator;

  printf("Enter an operator(+,-,/,*,^):");
  scanf("%c",&operator);

  printf("Enter two numbers:");
  scanf("%f%f",&n1,&n2);
  
  switch(operator)
  {
   ???
  }
  return 0;
}
