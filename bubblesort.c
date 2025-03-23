#include<stdio.h>
int main()
{
    int A[10];
    int i,j,t;
    printf("enter the data element of an array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }

    for(j=9;j>0;j--)
    {
        for(i=0;i<j;i++)
        {
            if (A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
    
            }
        }
        printf("Sorted array");
        for(i=0;i<10;i++)
        {
            printf("%d \n",A[i]);
        }
    }