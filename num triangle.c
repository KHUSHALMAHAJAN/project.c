#include <stdio.h>
int main()
{ 
  int n,ch=1;
  printf("Enter a number you want line\t");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
   {
     for(int j=n;j>i;j--)
      { 
        printf(" ");
      }
    for(int k=1;k<=i;k++)
      {
        printf("%d",ch++);
      }
      ch--;
     for(int m=1;m<i;m++)
      {
        printf("%d",--ch);
      }
     printf("\n");
     ch=1;
    }
    return 0;
}
