/*
  Exercise #2

  Write a function that find and print out all primes that are less
  than 10000.

*/
#include <stdio.h>
#include <math.h>

int main(){
  long i,n; // n prime tal and i index
  int count=0;
  for(n=1;n<2000000;n++){
    for(i=2;i<=(long)sqrt(n);i++){
      if(n%i == 0){
	count++;
	break;
      }
    }
    if(count == 0)
      printf("%d,",n);
    count=0;
  }
  
  return 0;
  
}

 
