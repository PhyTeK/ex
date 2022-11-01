/*
  Exercise:
  Using exercise u2_0211.c  write a  program to check if number is
  a palindrome number or not using  a function. called palindrome.

  A palindrome number is a number that is equal to is reverse.

  E.g. 12321 

*/

#include<stdio.h>

//Declaration of the function
????

void main()
{
  int num,i,rev=0;
  printf("Enter a number:");
  scanf("%d",&num);

  int res=palindrome(num,i,rev);

  if(??){
    puts("A palindrome number");
  }else{
    puts("Not a palindrome number");
  }
}

int palindrome(int num,int i,int rev){
???
}
