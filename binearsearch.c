#include<stdio.h>
int main()
{
    int A[10];
    int x,i,L=0,U=9,mid;
    printf("Enter the data element of an array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The data to be searched");
    scanf("%d",&x);
    while(L<=U)
    {
        mid=(L+U)/2;
        if(A[mid]==x)
        {
            printf("The searched data &d",mid);
            break;
        }
        else if (x<A[mid])
        {
            U=mid -1;
        }
        else{
            L=mid +1;
        }
    }
    if(L>U)
    {
        printf("The data is not found");
    }
}