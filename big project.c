#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int Alphabet();
int Armstrongnum();
int binary();
int factorial();
int fibonacciseries();
int game();
int matrix();
int numtriangle();
int palimdrome();
int primenum();
int reverse();
int swapnum();
int sumofdigit();
int main()
{
  int n,ch;
  printf("WELCOME C PROGRAM\n\n\n");
  printf("> Press 1 for Alphabet Triangle\n");
  printf("> Press 2 for Armstrong Number\n");
  printf("> Press 3 for Decimal to Binary\n");
  printf("> Press 4 for Factorial Number\n");
  printf("> Press 5 for Fibonacci Series\n");
  printf("> Press 6 for Game Stone Paper Scissor\n");
  printf("> Press 7 for Matrix\n");
  printf("> Press 8 for Number Triangle\n");
  printf("> Press 9 for Palindrome Number\n");
  printf("> Press 10 for Prime Number\n");
  printf("> Press 11 for Reverse Number\n");
  printf("> Press 12 for Swap Number\n");
  printf("> Press 13 for Sum of Digits\n");
  scanf("%d",&n);
  switch(n)
    {
       case 1:
         Alphabet();
         printf("You want continue program press 2 another Exit for press 0\t");
         scanf("%d",&ch);
         if(ch==0)
          {
            break;
          }
      case 2:
        printf("You want Press 1 for Armstrong Number continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            Armstrongnum();
          }
        else if(ch==0)
          {
            break;
          } 
      case 3:
        printf("You want Press 1 for Decimal to Binary continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            binary();
          }
        else if(ch==0)
          {
            break;
          } 
      case 4:
        printf("You want Press 1 for Factorial Number continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            factorial();
          }
         else if(ch==0)
          {
            break;
          }
      case 5:
        printf("You want Press 1 for Fibonacci Series continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            fibonacciseries();
          }
         else if(ch==0)
          {
            break;
          }
      case 6:
        printf("You want Press 1 for Game Stone Paper Scissor continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            game();
          }
         else if(ch==0)
          {
            break;
          }
      case 7:
        printf("You want Press 1 for Matrix continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            matrix();
          }
        else if(ch==0)
          {
            break;
          }
      case 8:
        printf("You want Press 1 for Number Triangle continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            numtriangle();
          }
       else if(ch==0)
          {
            break;
          }
      case 9:
        printf("You want Press 1 for Palindrome Number continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            palimdrome();
          }
        else if(ch==0)
          {
            break;
          }
      case 10:
        printf("You want Press 1 for Prime Number continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            primenum();
          }
        else if(ch==0)
          {
            break;
          }
      case 11:
        printf("You want Press 1 for Reverse Number continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            reverse();
          }
        else if(ch==0)
          {
            break;
          }
      case 12:
        printf("You want Press 1 for Swap Number continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            swapnum();
          }
        else if(ch==0)
          {
            break;
          }
      case 13:
        printf("You want Press 1 for Sum of Digits continue program press 2 another Exit for press 0\t");
        scanf("%d",&ch);
        if(ch==1);
          {
            sumofdigit();
          }
        else if(ch==0)
          {
            break;
          }
        default:
         printf("Please select carefully\n"); 
       }  
return 0;
}
int Alphabet()
 {
   int n,ch=65;
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
        printf("%c",ch++);
      }
      ch--;
     for(int m=1;m<i;m++)
      {
        printf("%c",--ch);
      }
     printf("\n");
     ch=65;
    }
  }
int Armstrongnum()
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
  }
int binary()
{
  int n;
  printf("Enter a number\t");
  scanf("%d",&n);
  printf("binary number is %b\n",n);
  return 0;
}
int factorial()
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
int fibonacciseries()
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
}
int game()
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
}
int matrix()
{
  int fmr,fmc,smr,smc,n;
  printf("Enter a frist matrix row\t");
  scanf("%d",&fmr);
  printf("Enter a frist matrix colum\t");
  scanf("%d",&fmc);
  int max1[fmr][fmc];
  printf("Enter a first matrix \n");
  for(int i=0;i<fmr;i++)
    {
      for(int j=0;j<fmc;j++)
        {
          printf("enter a element of %d row %d colum =\t",i+1,j+1);
          scanf("%d",&max1[i][j]);
        }
    }
  printf("Enter a second matrix row\t");
  scanf("%d",&smr);
  printf("Enter a second matrix colum\t");
  scanf("%d",&smc);
  int max2[smr][smc];
  printf("Enter a second matrix \n");
  for(int i=0;i<smr;i++)
    {
      for(int j=0;j<smc;j++)
        {
          printf("enter a element of %d row %d colum =\t",i+1,j+1);
          scanf("%d",&max2[i][j]);
        }
    }
    printf("Add for 1,Sub for 2, Multiply for 3\t");
    scanf("%d",&n);
    switch(n)
    {
     case 1:
      if(fmr==smr&&fmc==smc)
      {
        int max3[fmr][fmc];
        for(int i=0;i<fmr;i++)
          {
            for(int j=0;j<fmc;j++)
              {
                 max3[i][j]=max1[i][j]+max2[i][j];
                 printf("%d  ",max3[i][j]);
               }
               printf("\n");
           }
        }
       else
        {
          break;
        }
       case 2:
       if(fmr==smr&&fmc==smc)
        {
        int max3[fmr][fmc];
        for(int i=0;i<fmr;i++)
          {
            for(int j=0;j<fmc;j++)
              {
                 max3[i][j]=max1[i][j]-max2[i][j];
                 printf("%d  ",max3[i][j]);
               }
               printf("\n");
           }
         }
        else
         {
           break;
         }
      case 3:
       if(fmc==smr)
        {
          int max3[fmr][smr];
          for(int i=0;i<fmr;i++)
          {
            for(int j=0;j<fmc;j++)
              {
                 max3[i][j]=0;
                 for(int k=0;k<fmc;k++)
                   {
                     max3[i][j]+=max1[i][k]*max2[k][j];
                   }
               }
           }
           for(int i=0;i<fmr;i++)
          {
            for(int j=0;j<smc;j++)
              {
                 printf("%d  ",max3[i][j]);
               }
               printf("\n");
           }
         }
        else
         {
           break;
         }
          
    }  
}
int numtriangle()
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
} 
int palimdrome()
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
}
int primenum()
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
}
int reverse()
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
}
int swapnum()
{
  int n;
  int a,b=0,c;
  printf("Enter a number first \ta = ");
  scanf("%d",&a);
  printf("Enter a number second \tb = ");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a = %d\tb = %d\n",a,b);
}
int sumofdigit()
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
}
