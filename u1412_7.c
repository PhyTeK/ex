/*
  Exercise 7
  
  1) Ask the user to enter a number.
  2) Using a for loop print out the multiplication table of the number.

*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
  int n,i;
  long m;

  m=strtol(argv[1],'\0',10);

  for(i=1;i<=20;i++){
    printf("%d * %d = %d\n",m,i,m*i);
  }
  puts("");
  
  printf("Enter a number for a multiplication table:");
  scanf("%d",&n);
  
  for(i=1;i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
  }
}
