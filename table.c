#include<stdio.h>
int main()
{
    int a,i,d;
    printf("Enter number=");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
      d=a*i;
      printf("%d \n",d);
    }
    return 0;
}