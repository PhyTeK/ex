/* 
 
   Exercise 5: friday 28 october

   Q1) Declare an array a of 10 integer. 
   Q2) Declare an array b of 10 characters.
   Q3) Initialize a to the first 10 natural numbers.
   Q4) Initialize b to 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E'.
   Q5) Print out the third element of a.
   Q6) Print out the last element of b
*/

#include <stdio.h>

int main() {
   // Declarations
   int a[]={1,2,3,4,5,6,7,8,9,10};          // Svar 1
   char b[]={'a','A','b','B','c','C','d','D','e','E','\0'};  // Svar 4;  
   
   
   printf("The third element of a has index 2 and its value is: %d\n",a[2]); // S5
   printf("The last element of b has index 9 and its value is: %c\n",b[9]); // S5
   printf("Print b as string %s\n",b);
   
   return 0;
}

