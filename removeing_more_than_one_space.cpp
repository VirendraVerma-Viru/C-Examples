#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
    char data[100];
    int i,l,j,n=1;
    int flag;

    printf("Enter a sentence\n");
    gets(data);
    l=strlen(data);
    printf("%d\n",l);

    while(n>0)
    {
        flag=0;
      for(i=0;i<l;i++)
        {
            if(data[i]==' '&&data[i+1]==' ')
            {
                for(j=i+1;j<l;j++)
                {
                    data[j]=data[j+1];
                }
                flag=1;
                l--;
            }
        }
        if(!flag)
        {
            n=0;
        }
    }

   puts(data);
   printf("%d\n",l);
}
