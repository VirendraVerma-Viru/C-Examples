
#include<stdio.h>

main()
{
    int D,X,M=1,i,Sum,count=1,year=0;
    int A=1000,B=500;//Interest Rates
    printf("Enter the amount you have \n");
    scanf("%d",&D);
    printf("\nWhat amount you want\n");
    scanf("%d",&X);
    Sum=D;
    while(Sum<X)
    {
        if(M==12)
        {
        Sum=Sum+B;
        M=1;
        }
        else
        Sum=Sum+A;
        M++;
        count++;

    }
     while(count>12)
    {
        count=count/12;
        year++;
    }
    if(!Sum==X)
      {
           count--;
           printf("\n%d years %d months",year,count-2+.5);
      }
      else
      {
          printf("\n%d years %d months",year,count-1);
      }
   getch();
}
