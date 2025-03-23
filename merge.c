#include<stdio.h>
void merge_sort(int A[],int l,int u);
void merge(int A[],int l,int mid,int u);
int main()
{
    int A[10],l,u,i;
    printf("Enter the data element of an array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    l=0;
    u=9;
     merge_sort(A,l,u);
     for(i=0;i<10;i++)
     {
        printf("\t ");
        printf("%d \n",A[i]);
     }
     return 0;
}
void merge_sort(int A[],int l,int u)
    {
        int mid;
      if(l<u)
      {
        mid=(l+u)/2;
        merge_sort(A,l,mid);
        merge_sort(A,mid+1,u);
        merge(A,l,mid,u);
      }
    }
    void merge(int A[],int l,int mid,int u)
    {
        int B[10];
      int p=l; int q=mid+1;int r=l;
        while((p<=mid) && (q<=u))
        {
            if(A[p]<=A[q])
            {
              B[r]=A[p];
              p++;
              r++;
            }
            else
            {
                B[r]=A[q];
                q++;
                r++;
            }
        }
        while(p<=mid)
            {
                B[r]=A[p];
                p++;
                r++;
            }
            while(q<=u)
                {
                    B[r]=A[q];
                    q++;
                    r++;
                }
            for( int i=l;i<=u;i++)
            {
                A[i]=B[i];
            }
    }

            
        

    
