#include<stdio.h>
int main()
{
    int i,k,temp,A[5],n;
    printf("Enter the elements in heap");
    for(k=0;k<5;k++)
    {
        scanf("%d /n",&A[k]);
        i=k;
        while(i>0)
        {
            if((i%2)==0)
            {
                if(A[i]>A[(i-2)/2])
                {
                    temp=A[i];
                    A[i]=A[(i-2)/2];
                    A[(i-2)/2]= temp;
                    i=(i-2)/2;
                }
                else 
                break;
            }
            else
            {
                if(A[i]>A[(i-1)/2])
                {
                    temp=A[i];
                    A[i]=A[(i-1)/2];
                    A[(i-2)/2]= temp;
                    i=(i-1)/2;
                }
                else 
                break;
            }
            

            
        }
    }
    for(k=0;k<5;k++)
    {
        printf("%d",A[k]);
    }
}