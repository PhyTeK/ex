/*
  Exercise #3
  
  
  Write a program "multab" that capture the input from the terminal to display
  the multiplication table of a given integer.

  INPUT: 

  multab 15

  OUTPUT:

  15 x 1 = 15
  15 x 2 = 30
  ....
  15 x 10 = 150

*/

#include <stdio.h>
#include <stdlib.h>

int mult(int a,int b){
  return a*b;
}

int main(int argc,char **argv){
  long n;
  int i;
  char c='x';
  if(argc < 2)
    return 1;
  
  n = strtol(argv[1],'\0',10);

  for(i=1;i<=10;i++)
    printf("%d %c %d = %d\n",n,c,i,mult(n,i));
 

  return 0;
}
 
