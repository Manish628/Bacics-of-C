#include<stdio.h>
int main()
{
    int  i,n,sum=0;
    printf("Enter the no you want");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     if((i%2)==0)
     {
        sum=sum+i;
     }
     else
     continue;
    }
    printf("Total even sum upto %d is %d",n,sum);
    return 0;
}