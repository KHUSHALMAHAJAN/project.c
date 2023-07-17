#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{ 
  printf("____________________________________________________________________________\n");
  printf("C Program Stone Paper Scissor game\n\n");
  int n,a,k,pysc=0,cmsc=0;
  char str[56];
  printf("Enter you name\n");
  scanf("%s",str);
  for(int i=0;i<3;i++)
   {
      printf("%s your turn\n",str);
      printf(">Press 0 for Stone\n");
      printf(">Press 1 for Paper\n");
      printf(">Press 2 for scissor\n");
      scanf("%d",&n);
      switch(n)
       {
         case 0:
         printf("Your select stone\n");
         break;
         case 1:
         printf("Your select paper\n");
         break;
         case 2:
         printf("Your select scissor\n");
         break;
         default:
         printf("Your select wrong number");
       }
      srand(time(NULL));
      printf("A computer turn \n Wait.....\n");
      k=rand()%3;
      sleep(3);
      switch(k)
       {
         case 0:
         printf("Computer select stone\n");
         break;
         case 1:
         printf("Computer select paper\n");
         break;
         case 2:
         printf("Computer select scissor\n");
         break;
       }
      if(k==0&&n==2||k==1&&n==0||k==2&&n==1)
        {
          printf("Computer win 🥲️🥲️🥲️🥲️\n");
          cmsc++;
        }
      else if(n==0&&k==2||n==1&&k==0||n==2&&k==1)
        {
          printf("%s win 😀️😀️😀️😀️\n",str);
          pysc++;
        }
      else
       {
         printf("Draw🙂️🙂️🙂️🙂️\n");
         printf("If match Draw both 1 point is increass\n");
         pysc++;
         cmsc++;
       }
      printf("score %s = %d \t  computer = %d\n",str,pysc,cmsc);
      printf("____________________________________________________________________________\n");
      sleep(3);
    }
    if(pysc>cmsc)
      {
        printf("%s is win 🤩️🤩️🤩️🤩️\n",str); 
      }
    else if(cmsc>pysc)
      {
         printf("Computer is win 🥲️🥲️🥲️🥲️\n");
      }
    else
      {
         printf("Draw🙂️🙂️🙂️🙂️\n");
      }
    return 0;
  }
