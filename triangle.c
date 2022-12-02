/*
  Exercise #4

  Write a program "Pascal" that capture from the terminal the number
  of rows of the the Pascal triangle.

  INPUT: 

  6 

  OUTPUT:
  
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
1   5   10  10  5   1  


(x+y)² = 1.x² + 2.xy + 1.y²
(x+y)³ = 1.x³ + 3.x²y + 3.xy² + 1.y³


*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
  int n,i;
  char tab[]="\t\t";

  n = (int)strtol(argv[1],'\0',10);

  
  for(i=0;i<n;i++){
    printf("%s%d\n",1);

  }

  return 0;
}
 
