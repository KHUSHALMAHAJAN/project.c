#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{ 
  printf("\n\n__________________________________________________\n\n");
  printf("Read a all information carefully \n\n");
  int n,k,pysc=0,cmsc=0,ch;
  char str[56];
  printf("Enter you name\t:-  ");
  scanf("%s",str);
  printf("Welcome a Stone,Paper & Scissor game make by khushal use a C language\n👍️👍️ ALL THE BEST 👍️👍️\n");
  do
  {
    for(int i=0;i<3;i++)
     {
        re:
        printf("%s your turn\n",str);
        printf(">Press 0 for Stone\n");
        printf(">Press 1 for Paper\n");
        printf(">Press 2 for scissor\n");
        printf("select one choice\t:-  ");
        scanf("%d",&n);
        switch(n)
         {
           case 0:
           printf("You select stone 🪨️\n");
           break;
           case 1:
           printf("You select paper 🗒️\n");
           break;
           case 2:
           printf("You select scissor ✂️\n");
           break;
           default:
           printf("You select wrong number plz select vailed choice\n");
           goto re;
         }
        srand(time(NULL));
        printf("A computer turn \n Wait.....\n");
        k=rand()%3;
        sleep(3);
        switch(k)
         {
           case 0:
           printf("Computer select stone 🪨️\n");
           break;
           case 1:
           printf("Computer select paper 🗒️\n");
           break;
           case 2:
           printf("Computer select scissor ✂️\n");
           break;
        }
        if(k==0&&n==2||k==1&&n==0||k==2&&n==1)
          {
            printf("Computer win 🥲️🥲️🥲️🥲️\n");
            printf("Computer got a point\n");
            cmsc++;
          }
        else if(n==0&&k==2||n==1&&k==0||n==2&&k==1)
          {
            printf("%s win 🎖️🎖️🎖️🎖️\n",str);
            printf("%s got a point\n",str);
            pysc++;
          }
        else
         {
           printf("Draw🙂️🙂️🙂️🙂️\n");
           printf("If match Draw both 1 point is increasing \n");
           pysc++;
           cmsc++;
         }
        printf("score %s = %d \t  computer = %d\n",str,pysc,cmsc);
        printf("\n\n__________________________________________________\n\n");
        sleep(3);
      }
      if(pysc>cmsc)
        {
          printf("%s is win 🏆️🏆️🏆️🏆️\n",str); 
        }
      else if(cmsc>pysc)
        {
           printf("Computer is win 🥲️🥲️🥲️🥲️\n");
        }
      else
        {
           printf("Draw🙂️🙂️🙂️🙂️\n");
        }
     printf("You want to repeat play this game press 1 or exit \npress 0\t:-  ");
     scanf("%d",&ch);
     pysc=0;
     cmsc=0;
  }while(ch == 1);
  return 0;
}
