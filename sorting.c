#include<conio.h>
#include<stdio.h>
int main()
{

    int i,j,k,n,t;
    int A[n];
    printf("Total element of an array %d",n);
for(k=0;k<n-1;k++)
{
    scanf("%d",&A[k]);
}
printf("the data to be searched");
for(j=n-1;j>0;j--)
    {
        for(i=0;i<j;i++)
        {
            if(A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
        }
    }
for()
}