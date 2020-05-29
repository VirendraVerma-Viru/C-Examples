#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>
main()
{

    fstream ob;
    ob.fileopen("file.txt");
    scanf("%d",&ob);
    ob.write((char*)&ob,sizeof(ob));
    ob.close();
    getch();
}
