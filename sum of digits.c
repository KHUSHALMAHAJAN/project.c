#include <stdio.h>
int main()
{
  int n;
  int a,b=0,c;
  printf("Enter a number \n");
  scanf("%d",&n);
  while(n>0)
   {
    a=n%10;
    b=b+a;
    n=n/10;
   }
   printf("%d\n",b);
  return 0;
}

