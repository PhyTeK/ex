/* Boolesk algebra
   and Truth tables

   Prof that : X.Y + X.Z = X(Y+Z)
   with X={1,0}, Y={1,0} and Z={1,0}

   . means AND
   + means OR
*/

#include <stdio.h>

int main(){
int X,Y,Z;

printf(" X\tY\tZ\tXY\tXZ\tY+Z\tXY+XZ\tX(Y+Z)\n");
for(X=0;X<2;X++)
  for(Y=0;Y<2;Y++)
    for(Z=0;Z<2;Z++)
      printf(" %d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
	     X,Y,Z,X&Y,X&Z,Y|Z,(X&Y)|(X&Z), X&(Y|Z));

 return 0;
}
