/* 
   Exercise #5
   
   1) Create a 2D array named "a" with 10 rows and 20 columns and
   initialize it randomly with integer from 1 to 100.

   2) Print out the array "a".

   3) Same than points 1) and 2) using a pointer.

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NLN puts("")

int main(){
  int i,j;
  
  time_t t;
  t=time(NULL);

  int a[10][20];
  int *pa;
  
  printf("%d\n",t);
  srand((unsigned)t);

  for(i=0;i<10;i++)
    for(j=0;j<20;j++)
      a[i][j]= rand()%100+1;
    

  for(i=0;i<10;i++){
    for(j=0;j<20;j++){
      printf("%3d ",a[i][j]);
    }
    NLN;
  }
  NLN;

  pa=&a[0][0];
  
  for(i=0;i<10;i++){
    for(j=0;j<20;j++)
      printf("%3d ",*(pa+j+20*i));
    NLN;
  }

  
  return 0;
}
