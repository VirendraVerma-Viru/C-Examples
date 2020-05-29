#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    FILE *fp;
    char data;char data2;
    printf("Enter your data");
    fp=fopen("information.txt","w");
    data=getch();
    putc(data,fp);
    fclose(fp);

    fp=fopen("information.txt","r");
    data2=fgetc(fp);
    printf("%s",data);

}
