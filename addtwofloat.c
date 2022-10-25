#include <stdio.h>
int main()
{
  double a, b, c;
 
  printf("Enter two numbers\n");
  scanf("%lf%lf", &a, &b);

  c = a + b;
  printf("%lf\n", c);
 
  return 0;
}
