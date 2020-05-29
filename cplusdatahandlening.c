#include<stdio.h>
#include<conio.h>
#include<fstream.h>
main()
{

    fstream ob;
    ob.fileopen("file.txt",ios::binary||ios::append||ios::in||ios::out);
    scanf("%d",&ob);
    ob.write((char*)&ob,sizeof(ob));
    ob.close();
    getch();
}
