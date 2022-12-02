/* Exercise #6

   1) Create three char arrays (strings) s1, s2 and s3.
   2) Define and initialize three pointers p1, p2 and p3
   that point on s1, s2 and s3 respectively.

*/

#include <stdio.h>

int main(){
  int i;
  char s1[]="Hello World";
  char s2[]="Hello Dennis Richie";
  char s3[]="Bye bye!";
  
  char *p1,*p2,*p3;
  char *a[3];
  
  p1=&s1[0];
  p2=&s2[0];
  p3=&s3[0];

  a[0]=p1;
  a[1]=p2;
  a[2]=p3;

  for(i=0;i<3;i++)
    printf("%p %s\n",&a[i],a[i]);
  return 0;
}
