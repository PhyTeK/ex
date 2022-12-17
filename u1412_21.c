/* 
   Exercise 2_1

   1) Create an array using malloc to allocate MAX bytes in memory. MAX is a macro defined to 1000000.
   2) Use malloc inside a for-loop starting at 0 to MAXL with MAXL is a macro defined to 1000000.
   3) Use time commando to measure the time to run the code.

*/


#include <stdlib.h>
#define MAX 100000000
#define MAXL 10000000

int main(){
  int i,*a;
  
  for(i=0;i<MAX;i++){
    a=(int*)malloc(MAXL);

    free(a);
  }
  
  return 0;
}
