#include<stdio.h>
int main()
{
int a,b,*p,*q,c;
printf("Enter the values of a and b");
scanf("%d %d \n",&a,&b);
printf("hello");
p=&a;
q=&b;
c=*p+*q;
printf("%d \n",c);
return 0;
}