#include <stdio.h>
int main()
{
  int n;
  int a,b=0,c;
  printf("Enter a number \n");
  scanf("%d",&n);
  b=n;
  while(n>0)
   {
    a=n%10;
    c=c+(a*a*a);
    n=n/10;
   }
   if(b==c)
    {
      printf("Armstrong number\n");
    }
  else
    {
      printf("Armstrong number not \n");
    }
  return 0;
}

