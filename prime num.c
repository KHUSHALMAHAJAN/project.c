#include <stdio.h>
int main()
{
  int n;
  int a,b=0,c;
  printf("Enter a number \n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
   {
     if(n%i==0)
      {
        b++;
      }
    }
  if(b==2)
   {
     printf("%d is prime number\n",n);
   }
  else 
   {
     printf("%d is not prime number\n",n);
    } 
  return 0;
}

