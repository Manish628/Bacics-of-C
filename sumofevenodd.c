#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("enter the condtion");
    scanf("%d",&n);
    printf("Enter the no you want to sum");
    scanf("%d",&j);
    if(n==1)
    {
        for(i=1;i<=j;i++)
        {
            if((i%2)==0)
            {
                sum=sum+i;
            }
            else 
            continue;
        }
        printf("Total sum of even no upto %d id %d",j,sum);
    }
    else{
        for(i=1;i<=j;i++)
        {
            if((i%2)==1)
            {
                sum=sum+i;
            }
            else
            continue;
        }
        printf("Total sum of odd no upto %d is %d",j,sum);
    }
    return 0;

}