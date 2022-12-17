/* 
   Exercise 5: 

   1) Declare and Initialize an array "a1" with 
      the following numbers:
      
      34 2 5 56 3 7 8 

   2) Declare and Initialize an array "a2" with 
       the following numbers:
      
      74 4 1 10 23 4 6

   3) Merge both arrays i a third array named "a3"

   4) Print array "a3".

*/


#include<stdio.h>

int main(){
  int a1[]={34,2,5,56,3,7,8};
  int a2[]={74,4,1,3,10,23,4,6};

  int i,n1,n2;

  // Count te numbers of elements for each arrays
  n1=sizeof(a1)/sizeof(a1[0]);
  n2=sizeof(a2)/sizeof(a2[0]);

  int a3[n1+n2];
  
  //for(i=0;i<n1+n2;i++)
  //  a3[i]=0;
  
  // copy the n1 first elements of a1 inside a3
  for(i=0;i<n1;i++)
    a3[i]=a1[i];
  // copy the n2 elements of a2 inside a3
  for(i=0;i<n2;i++)
    a3[i+n1]=a2[i];
  // print out the resulting array a3
  for(i=0;i<n1+n2;i++)
    printf("%d ",a3[i]);

  puts("");
  
  return 0;
}
