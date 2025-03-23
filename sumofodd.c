#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the no you want");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if((i%2)==1)
        {
            sum=sum+i;
        }
        else 
        continue;
    }
    printf("Total sum of odd no upto %d is %d",n,sum);
    return 0;
}