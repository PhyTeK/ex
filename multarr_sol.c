/* Array multiplication:

   1) Write a code that ask an user to enter 5 values in an array arr1
   2) Write a code that ask an user to enter 5 values in an array arr2
   3) Write a code that multiply each element of arr1 with the corresponding element in arr2
      and set in in an array arr3
   4) Print out each element of arr3

 */


#include<stdio.h>
void main()
{
  int arr1[5],arr2[5],arr3[5],i;
  printf("Enter 5 values in arr1:");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("Enter 5 values in arr2:");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&arr2[i]);
  }
  for(i=0;i<=4;i++)
  {
    arr3[i]=arr1[i]*arr2[i];
  }
  printf("Multiplication of two arrays");
  for(i=0;i<=4;i++)
  {
    printf("%d\t",&arr3[i]);
  }
}
