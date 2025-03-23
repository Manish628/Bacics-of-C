#include<stdio.h>
int main()
{
    int A[10];
    int x,i;
    printf("Enter the data element of an array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the data searched");
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        if(A[i]==x)
        {
            break;
        }
    }
    if(i<10)
{
    printf("Data  found at index %d",i);
}
else
{
    printf("data not found");
}
    return 0;
}
