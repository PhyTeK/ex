//C program to display Fibonacci sequence.

#include <stdio.h>

int fibo(){
  static int a=0,b=1;
  int f;

  f=a+b;
  a=b;
  b=f;
  return (f);
}

int fibbonaci(int n){
  if(n==1 || n==0)
    return 1;
  return fibbonaci(n-1)+fibbonaci(n-2);
}
int main()
{
  int n1=0,n2=1,t=0,a,i;

  printf("Enter no of terms:");
  scanf("%d",&a);

  printf("Fibonacci sequence:\n");
  for(i=1;i<=a;i++){
    t=n1+n2;
    n1=n2;
    n2=t;  // n1 + n2 + t
    printf("%d ",t);
  }
  puts("");

  for(i=1;i<=a;i++)
    printf("%d ",fibbonaci(i));

  puts("");
  
  for(i=0;i<a;i++)
    printf("%d ",fibo());

  puts("");
  return 0;
}
