/* Exercise #2

   Test the binary operators AND,OR,XOR,NOT,<<,>>

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

  return (bno);
}

int main(int argc,char **argv){
  int d=11,d1=23,d2=25;
  long b,b1,b2;

  if(argc != 2)
    return 1;
  d=strtol(argv[1],'\0',10);
  b=tobinary(d);
  printf("%d  => %d\n",d,b);

  // Test of AND
  
  printf("d1=%d -> %d\n",d1,tobinary(d1));
  printf("d2=%d -> %d\n",d2,tobinary(d2));
  printf("d1&d2=%d -> %d\n",d1&d2,tobinary(d1&d2));


  // Test of OR
  
  printf("d1=%d -> %d\n",d1,tobinary(d1));
  printf("d2=%d -> %d\n",d2,tobinary(d2));
  printf("d1|d2=%d -> %d\n",d1|d2,tobinary(d1|d2));

  // Test of XOR
  
  printf("d1=%d -> %d\n",d1,tobinary(d1));
  printf("d2=%d -> %d\n",d2,tobinary(d2));
  printf("d1^d2=%d -> %d\n",d1^d2,tobinary(d1^d2));

  // Test of NOT
  
  printf("d1=%d -> %d\n",d1,tobinary(d1));
  printf("~d1=%d -> %d\n",~d1,tobinary(~d1));
  printf("~(~d1)=%d -> %d\n",~~d1,tobinary(~~d1));

  // Test of shift left <<
  
  printf("d1=%d -> %d\n",d1,tobinary(d1));
  printf("d1<<%d -> %d\n",d1 << 1 ,tobinary(d1<<1));

  // Test of shift left >>
  
  printf("d1=%d -> %d\n",d1,tobinary(d1));
  printf("d1>>%d -> %d\n",d1>>2 ,tobinary(d1>>2));

  // Set bit 2 >>
  
  printf("d1=%d -> %d\n",d1,tobinary(d1));
  printf("d1 |= 0x08 -> %d\n",d1 |=0x08 ,tobinary(d1|=0x08));
  printf("(1<<4) -> %d\n",(1<<4) ,tobinary((1<<4)));
  printf("d1 &= (1<<4) -> %d\n",d1 &= (1<<4) ,tobinary(d1 &= (1<<4)));

  b1=1001001;

  printf("%d -> %d\n",b1,tobinary(b1 & (1<<3)));

  /*
  flag |= 0x04; // Set bit 2
  flag &=  ̃0x04; // Clear bit 2
  flag &= (1<<3); // Set bit 3
  flag &=  ̃(1<<3); // Clear bit 3
  flag ˆ= (1<<3); // Toggle bit 3
  */
  
  return 0;

}
