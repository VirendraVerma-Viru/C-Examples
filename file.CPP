# include <stdio.h>
# include <string.h>

FILE *fp ;
    char data[50];
    int l,i;

    void question();
    void answer();

int main( )
{

    for(i=0;i<49;i++)
            data[i]=' ';

    question();


    answer();



    return 0;
}

void question()
{
   // opening an existing file
    fp = fopen("question.txt", "a") ;
    if ( fp == NULL )
    {
        printf( "Could not open file test.c" ) ;

    }

    // getting input from user
    //while ( (strlen ( gets( data ) ))> 0 )
    //{
        gets( data );
        l=strlen(data);

        data[l]='.';

        // writing in the file
        fputs(data, fp) ;

        fputs("\n", fp) ;
        for(i=0;i<49;i++)
            data[i]=' ';

    //}
     fclose(fp) ;
}

void answer()
{
   // opening an existing file
    fp = fopen("answer.txt", "a") ;
    if ( fp == NULL )
    {
        printf( "Could not open file test.c" ) ;

    }

    // getting input from user
    //while ( (strlen ( gets( data ) ))> 0 )
    //{
        gets( data );
        l=strlen(data);

        data[l]='.';

        // writing in the file
        fputs(data, fp) ;

        fputs("\n", fp) ;
        for(i=0;i<49;i++)
            data[i]=' ';

    //}
     fclose(fp) ;
}
