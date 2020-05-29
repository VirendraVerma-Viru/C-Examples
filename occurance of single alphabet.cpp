
#include<stdio.h>
#include<string.h>
main()
{
    char a[20],n,m=1,l,i,templen,j,flag=0,letter=0,k;
    char ac[20];
    char temps[20];
    int b[20];
   printf("Enter a Length\n");
    scanf("%d",&n);
   printf("Enter a string\n");
    scanf("%s",a);

    l=strlen(a);
    for(i=0;i<20;i++)
    {
        b[i]=1;

    }
    for(i=0;i<20;i++)
    {
        temps[i]=' ';

    }

   if(n==l)
   {
       templen=l;
       temps[0]=a[0];
        //analysis of 2 same letters
       for(i=0;i<templen;i++)
       {
        for(j=0;j<templen;j++)
        {
            if(temps[j]==a[i]&&i!=j)
            {
               b[j]=b[j]+1;
               printf("\nMatched%d",b[j]);
            }
           else if((temps[j]!=a[i]&&temps[j]==' ')&&i!=j){
            temps[j]=a[j];
            b[j]=1;
             printf("\nUNMatched");
           }
        }

       }
       //puts(a);
       puts(temps);
       //removing those letters

       for(i=0;i<templen;i++)
       {
           printf("\n%d\n",b[i]);

           if(b[i]!=1)
           {
                ac[letter]=a[i];
                letter++;
           }
       }
   }
   else
   {
       printf("Enter Valid string");
    }
        //printf("\n%d\n",letter);
}
