
#include<stdio.h>
#include<conio.h>

main()
{
    //storing

    char inputarr[1000];
    int a[50];char symbols[50];char n;int nextLineSymbol=0,nextLineA=0;
    int l,i;

    //calcution items
    int sum=0;int m=1;int j,k;

    //for initializing with zero
    for(i=0;i<50;i++)
    {
        a[i]=0;
    }

    //inputing and storing in arrayif(symbols[i]=='+')


    gets(inputarr);
    l=strlen(inputarr);

    for(i=0;i<l;i++)
    {
        n=inputarr[i];

        if(n=='+'||n=='-'||n=='*'||n=='/')
        {
            symbols[nextLineSymbol]=n;
            nextLineSymbol++;
            nextLineA++;
        }



        else
        {
            switch(n)
            {
            case '0':n=0;break;
            case '1':n=1;break;
            case '2':n=2;break;
            case '3':n=3;break;
            case '4':n=4;break;
            case '5':n=5;break;
            case '6':n=6;break;
            case '7':n=7;break;
            case '8':n=8;break;
            case '9':n=9;break;

            }
        a[nextLineA]=a[nextLineA]*10+n;
        }
    }




    // calculation part
while(m>0)
{



        for(i=0;i<=nextLineSymbol;i++)
        {
            if(symbols[i]=='/')
            {
                int temp=a[i];
                a[i]=(temp/a[i+1]);
                for(j=i+1;j<nextLineA;j++)
                {
                    a[j]=a[j+1];
                }
                for(j=i;j<nextLineSymbol;j++)
                {
                    symbols[j]=symbols[j+1];
                }
                nextLineSymbol--;
                nextLineA--;
            }
            else
            {
               if(symbols[i]=='*')
                {
                    int temp=a[i];
                    a[i]=(temp*a[i+1]);
                    for(j=i+1;j<nextLineA;j++)
                    {
                        a[j]=a[j+1];
                    }
                    for(j=i;j<nextLineSymbol;j++)
                    {
                        symbols[j]=symbols[j+1];
                    }
                    nextLineSymbol--;
                    nextLineA--;
                }
                else
                {

                    if(symbols[i]=='+')
                    {
                        int temp=a[i];
                        a[i]=(temp+a[i+1]);
                        for(j=i+1;j<nextLineA;j++)
                        {
                            a[j]=a[j+1];
                        }
                        for(j=i;j<nextLineSymbol;j++)
                        {
                            symbols[j]=symbols[j+1];
                        }
                        nextLineSymbol--;
                        nextLineA--;
                    }
                    else
                    {
                       if(symbols[i]=='-')
                        {
                            int temp=a[i];
                            a[i]=(temp-a[i+1]);
                            for(j=i+1;j<nextLineA;j++)
                            {
                                a[j]=a[j+1];
                            }
                            for(j=i;j<nextLineSymbol;j++)
                            {
                                symbols[j]=symbols[j+1];
                            }
                            nextLineSymbol--;
                            nextLineA--;
                        }//end subtration
                    }//end plus
                }//end multiply
            }//end divide
        }



    if(nextLineSymbol==0)
        m=0;

}



printf("\n");
    for(i=0;i<=nextLineA;i++)
    {
        printf("%d\n",a[i]);
    }
printf("\n");
    for(i=0;i<nextLineSymbol;i++)
    {
        printf("%c\n",symbols[i]);
    }

}
