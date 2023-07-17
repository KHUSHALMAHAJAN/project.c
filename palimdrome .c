#include <stdio.h>
int main()
{
  int n;
  int a,b=0,c;
  printf("Enter a number \n");
  scanf("%d",&n);
  c=n;
  while(n>0)
   {
    a=n%10;
    b=(b*10)+a;
    n=n/10;
   }
   if(c==b)
   {
    printf("%d is palindrome \n",c);
   }
   else
   {
   printf("%d is not palindrome \n",c);
   }
  return 0;
}

