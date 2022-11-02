/* 
   Exercise#1, Friday 28 October
   ------------------------------
   Write a C program to displat following expressions:
   a+c,x+c,dx+x,a+x,s+b,ax+b,s+c,ax+c,ax+ux

   Variable declaration + definition:
   int a = 125, b= 12345;
   long ax = 1234567890;
   short int si = 201;
   float x = 2.13459;
   double dx = 1.1415927;
   char c = 'W';
   unsigned long ux = 2541567890;
*/

#include <stdio.h>
#include <float.h>

int main(){
  int a = 125, b= -12345;
  long ax = 1234567890l;
  short si = 125;
  float x = 2.13459;
  double dx = 1.14159E-223;
  long double dy = 1.123456789012345678901234567890;
  long double dz = 1.123456789E+4233L;
  char c = 'W';
  unsigned long long ux = 1234567890123456789;

  printf("int a: %d\n",a);
  printf("int b: %d\n",b);
  printf("long int ax: %ul\n",ax);
  printf("short int si: %d\n",si);
  printf("float x: %f\n",x);
  printf("double dx: %e\n",dx);
  printf("LDBL_MAX=%LE\n",LDBL_MAX);
  printf("long double dy: %1.30LE\n",dy);
  printf("long double dz: %LE\n",dz);
  printf("char c: %c\n",c);
  printf("unsigned long long int ux: %llu\n",ux);

  printf("Storage size for unsigned float : %zu  bytes \n", sizeof(float));
  printf("Storage size for double : %zu  bytes \n", sizeof(double));
  printf("Storage size for long double : %zu  bytes \n", sizeof(long double));
  printf("long double    %zu bytes     %LE to %LE |>(using %%E as format   specifier)\n",
	 sizeof(long double),LDBL_MIN,LDBL_MAX);
  
  return 0;
}
