#include<stdio.h>
#include<conio.h>
main()
{
    int a[10];int i;
    FILE *fp;
    fp=fopen("number.txt","r");
    while(i<10)
    {


        if(getw(fp)=='32')
         i++;
         a[i]=getw(fp);
    }
     for(i=0;i<10;i++)
    {

        printf("%d",a[i]);
    }
    getch();
}
