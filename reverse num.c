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
    printf("%d",a);
    n=n/10;
   }
   printf("\n");
  return 0;
}

