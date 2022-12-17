/*
  Exercise 1: Malloc and Calloc

  1) Ask a user the size of an array o intger
  2) Allocate with malloc the array
  3) Initialize each element of the array to a random number between 1 and 100
  4) Define a function linearsearch that find a given number in the
  array and return its index.
  5) Print the index of the given number if it exists in the array.

 */



#include<stdio.h>
#include<stdlib.h>


int main()
{
  unsigned long i,*a,n=100000000,N=10000000;
  printf("n=%ld N=%d\n",n,N);

  for(i=0;i<N;i++){
    a=(unsigned long *)malloc(n*sizeof(unsigned long));
    //  a=(unsigned long *)calloc(n,sizeof(unsigned long));
    free(a);
  }

        
    return 0;
}

