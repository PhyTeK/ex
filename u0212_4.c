/* 
   Exercise #4
   -----------

   1) Create (declare and define) a function named "fun1" which accept
   an integer as argument and return 2 times the value of the
   argument.

   2) Create a second function "fun2" that take function "fun1" as
   argument and return 3 times the value returned by "fun1".

   3) Call and print the return value of "fun2" in main().


   

*/

   










#include <stdio.h>
int fun1(int);
int fun2(int(*)(int),int);


// Pass a function to a function


int main(){
  int a=5;
  printf("%d\n",fun2(fun1,a));

  return 0;
}


int fun1(int n){
  return 2*n;
}

int fun2(int (*fun1)(int),int b){
  return 3*fun1(b);
}
