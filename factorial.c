#include <stdio.h>
int main()
{
  int n;
  int a,b=0,c;
  printf("Enter a number \n");
  scanf("%d",&n);
  for(int i=n-1;i>=1;i--)
   {
     n=n*i;
   }
   printf("%d\n",n);
  return 0;
}

