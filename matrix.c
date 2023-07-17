#include <stdio.h>
int main()
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
  return 0;
}

