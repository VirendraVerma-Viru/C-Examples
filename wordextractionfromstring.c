#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char strarr[1000];
    char wordarr[500][1000];
    int length=0;int i=0,nextLine=0,chstore=0,l;
    printf("Enter a sentence\n");
    gets(strarr);
        length=strlen(strarr);
        printf("\n");
        for(i=0;i<length;i++)
            {
                if(strarr[i]==' ')
                {
                    nextLine++;
                    chstore=0;
                }
                else
                {
                    wordarr[nextLine][chstore]=strarr[i];// extracting and storing word in array
                    chstore++;
                }
            }
            //printing
           for(i=0;i<=nextLine;i++)
            {
                puts(wordarr[i]);
            }
            getch();
}
