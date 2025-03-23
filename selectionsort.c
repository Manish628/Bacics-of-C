#include<stdio.h>
int main()
{
    int A[10];
    int i,j,min_index,t;
    printf("Enter the data element of an array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=0;j<9;j++)
    {
        min_index=j;
    for(i=j+1;i<10;i++)
    {
        if(A[min_index]>A[i])
        {
            min_index=i;
        }
    }
    t=A[j];
    A[j]=A[min_index];
    A[min_index]=t;
}
    printf("Selection sort result");
    for(i=0;i<10;i++)
    {
        printf("%d \n",A[i]);
    }

}