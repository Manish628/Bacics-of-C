#include<stdio.h>
int main()
{
    int sum=0,x=1,y=0;
    int i;
    printf("%d",x);
    printf("%d",y);
    for(i=1;i<=10;i++)
    {
        sum=x+y;
        printf("%d \n",sum);
        x=y;
        y=sum;
    }
    return 0;
    }