/* Exercise 4: friday 28 october
   Using a Point struct calculate the distance between two points
   A(2,3) and B(-3,5) 
   Print out the distance
 */

#include <stdio.h>
#include <math.h>

struct Point{
    float x,y;
  };


int main(){
  // Dont forget to declare struct Point!
  typedef struct Point Point;

  // Declaration
  Point A,B;
  
  // Definition
  A.x = 2.0;
  A.y = 3.0;
  B.x = -3.0;
  B.y = 5.0;

  // Distance
  float d,dx,dy;

  dx=B.x-A.x;
  dy=B.y-A.y;

  d=dx*dx+dy*dy;
  d=sqrt(d);  // Distance between A and B

  printf("Distance between A and B is: %f\n",d);
  
  return 0;

}
