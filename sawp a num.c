#include <stdio.h>
int main()
{
  int n;
  int a,b=0,c;
  printf("Enter a number first \ta = ");
  scanf("%d",&a);
  printf("Enter a number second \tb = ");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a = %d\tb = %d\n",a,b);
  return 0;
}

