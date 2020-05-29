#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include<windows.h>

void delay(unsigned int);

int a=1;

void *repeat(int *d)
{
    while(a>0)
    {
        delay(500);
        printf("Hello\n");
        a=*d;
    }
}
int main()
{
    pthread_t th1;int b;
    pthread_create(&th1,NULL,repeat,&b);
    printf("Hello World");
    scanf("%d",&b);
    return 0;
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
