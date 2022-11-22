/* Exercise #1

   Write a function named "tobinary" that convert decimal number to
   binary number. Test it!

*/

#include <stdio.h>
#include <stdlib.h>

long tobinary(int);

long tobinary(int dno){
  // dno=decimal number
  long bno=0; //binary number
  int r,f=1;
  /* 
     T.ex om
     dno=11 => bno=1011
     r = dno%2;  r=11%2=1        <- | 
     bno += f*r; => bno = 1*1=1     |
     dno = 11/2; => dno=5;      -----

  */
  
  while(dno){
    r=dno%2;
    bno += f*r;
    dno /= 2;
    f *= 10;
  }

  return bno;
}

int main(int argc,char **argv){
  int d=11;
  long b;
  if(argc != 2)
    return 1;
  d=strtol(argv[1],'\0',10);
  b=tobinary(d);
  printf("%d  => %d\n",d,b);
  return 0;

}
