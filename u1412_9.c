/* 
   Exercise 8: 

   1) Ask a user to enter a week number (1-7)
   2) Using a switch print out the corresponding day
      1 is Monday, ...

*/


#include <stdio.h>
#define MAX 100

int main() {
  char text1[MAX], text2[MAX];
  int i, j;

  printf("\n Enter first string: ");
  scanf("%s",&text1);
  printf("\n Enter second string: ");
  scanf("%s",&text2);

  // Length of string1
  i=0;
  while(text1[i] != '\0') {
    i++;
  }
  
  j = 0;
  while(text2[j] != '\0') {
    text1[i] = text2[j];
    i++;
    j++;
  }

  text1[i] = '\0';

  printf("\n Concatenated strings = %s\n", text1);

  return 0;
}

