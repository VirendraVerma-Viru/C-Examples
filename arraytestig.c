
#include<stdio.h>
#include<conio.h>

main()
{
    int mm=3,nn=100;
    int i,j=0;
    char arr[mm][nn];


    printf("hello\n");
    for(i=0;i<mm;i++)
{
    gets(arr[i]);

}

 for(i=0;i<mm;i++)
{
    arr[i][j]=NULL;

}
    for(i=0;i<mm;i++)
{
    puts(arr[i]);

}

}
