#include<stdio.h>
int main()
{
    int A[10],i,l,t;
    printf("Enter the data array of an element");
    for(i=0;i<10;i++)
    {
scanf("%d",&A[i]);
    }
    for(i=0;i<9;i++)
    {
        l=i+1;
        while(l>0 &&A[l]<A[l-1])
        {
            t=A[l];
            A[l]=A[l-1];
            A[l-1]=t;
            l=l-1;
        }
    }
    printf("insertion sorted array");
    for(i=0;i<10;i++)
    {
        printf("%d \n",A[i]);
    }
}