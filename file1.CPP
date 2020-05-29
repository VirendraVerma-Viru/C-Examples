# include <stdio.h>
#include<conio.h>
#include<string.h>
int main( )
{
         FILE *fp ;
         char data[50] ;
         char rev[50] ;
         int i=1;int l;
         printf( "Opening the file test.c in read mode\n" ) ;
         fp = fopen( "test.txt", "r" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c\n" ) ;
                 return 1;
         }
         printf( "Reading the file test.c\n" ) ;
         while( fgets ( data,50, fp ) != NULL )
         {

         }
         printf( "%s" , data ) ;
         l=strlen(data);
         printf( "%d\n" , l ) ;




for(i=0;i<=l;i++)
{
if(data[i]=='.')
    printf("\n");
else
    printf("%c",data[i]);
}


         printf("Closing the file test.c\n") ;
         fclose(fp) ;
         return 0;
}
