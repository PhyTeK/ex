/* 
   Exercise 6: 

   Print out the following drawing using loop.

output

    ******* 
    *  *  *
    *  *  *
    *  *  *
    *******


*/

#include<stdio.h>

int main(){
  int i;
  char s1[]="    *******";
  char s2[]="    *  *  *";

  for(i=0;i<5;i++){  // I=index of rows
    if(i==0 || i==4)   // First and last row
      printf("%s\n",s1);
    else
      printf("%s\n",s2);
  }
  
  return 0;
}
 
