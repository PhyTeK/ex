#include <stdio.h>
#include <limits.h>

int main(void) {
  float floatNumber;
  double doubleNumber;
  long double longDoubleNumber;

  // Size of interger types

  printf ("sizeof unsigned int = %d bytes.\n", sizeof(unsigned int));
  printf ("sizeof unsigned long long = %d bytes.\n", sizeof(unsigned long long));
  //#   define LLONG_MAX	9223372036854775807LL
  //#   define LLONG_MIN	(-LLONG_MAX - 1LL)

/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0.)  */
//#   define ULLONG_MAX	18446744073709551615ULL
  printf ("max unsigned int = %llu\n", LLONG_MAX);
  printf ("min unsigned int = %llu\n", LLONG_MIN);
  printf ("max unsigned long long = %llu\n", ULLONG_MAX);
  
  // Size of floating point types
  printf("Storage size for unsigned float : %lu  bytes \n", sizeof(float));
  printf("Storage size for double :         %lu  bytes \n", sizeof(double));
  printf("Storage size for long double :   %lu  bytes \n", sizeof(long double));
  
  floatNumber = 2.0/3.0;
  doubleNumber = 2.0/3.0;
  longDoubleNumber = 2.0/3.0;
  
  puts("\nCompare precision at 4 decimal points:");
  printf("floatNumber      = %1.4f\n", floatNumber);
  printf("doubleNumber     = %1.4lf\n", doubleNumber);
  printf("longDoubleNumber = %1.4Lf\n", longDoubleNumber);
  
  puts("\nCompare precision at 10 decimal points:");
  printf("floatNumber      = %1.10f\n", floatNumber);
  printf("doubleNumber     = %1.10lf\n", doubleNumber);
  printf("longDoubleNumber = %1.10Lf\n", longDoubleNumber);
  
  puts("\nCompare precision at 30 decimal points:");
  printf("floatNumber      = %1.30f\n", floatNumber);
  printf("doubleNumber     = %1.50lf\n", doubleNumber);
  printf("longDoubleNumber = %1.50Lf\n", longDoubleNumber);
  return 0;
}
