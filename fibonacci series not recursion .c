#include <stdio.h>
int main()
{
  int n;
  int a,b,c;
  b=0,c=1;
  printf("Enter a number \n");
  scanf("%d",&n);
  printf("0   ");
  for(int i=2;i<=n;i++)
   {
     a=b+c;
     printf("%d  ",a);
     c=b;
     b=a;
    }
    printf("\n");
  return 0;
}
