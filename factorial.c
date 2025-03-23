#include<stdio.h>
int main()
{
    int i,a,c=1;
    printf("Enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=c*i;
    }
    printf(" \n %d",c);
    return 0;
}