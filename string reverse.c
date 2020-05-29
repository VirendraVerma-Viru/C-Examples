#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char word[10],s[10];int i=0,l;int j;
    printf("Enter a word ");
    gets(word);
    l=strlen(word);
    i=l;
    for(j=0;j<l;)
    {
        s[i-1]=word[j];
        j++;
        i--;
    }
    printf("%s",s);
    getch();
    return 0;
}
