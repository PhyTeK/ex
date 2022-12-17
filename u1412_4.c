/* 
   Exercise 4: 

   1) Ask the user to enter a number.
   2) Count the number of digits in the number.

*/


#include<stdio.h>

int main(){
  int n,count=0;

  printf("Enter a number:");
  scanf("%d",&n);

  while(n != 0){  // != not equal to (!=not)
    n=n/10;     // Key of the algorythm
    count++;
  }
  printf("Count of digits=%d\n",count);
  
  return 0;
}
