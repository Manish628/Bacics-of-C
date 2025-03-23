#include<stdio.h>
#include<string.h>
void Length();
void Concatenated();
void Reverse();
char str[100];
int main()
{
    printf("\t\t STRING OPERATIONS\n");
    printf("\n Enter a string:  ");
    scanf("%s",&str);
    Length();
    Reverse();
    Concatenated();
}
void Length()
{
    int i,length=0;
    printf("\n\n\t String length");
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("\n Length of input string is: %d",length);
}
void Reverse()
{
    int i;
    char a[100];
    int len=strlen(str);
    printf("\n\n String Reverse-->>");
    printf("\n\n Reverse String is-->>");
    int x=len-1;
    for(i=0;i<=len;i++)
    {
        a[x-i]=str[i];
    }
    for(i=0;i<=len;i++)
    {
        printf("%c",a[i]);
    }
}
void Concatenated()
{
    char str1[100],str2[100],str3[100];
    int i=0,j=0,k=0;
    printf("\n\n String Concatenated..");
    printf("\n Enter the first string");
    scanf("%s",&str1);
    printf("\n Enter the second string");
    scanf("%s",&str2);
    while(str1[i]!='\0')
    {
        str3[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0')
    {
        str3[i]=str2[j];
        i++;
        j++;
    }
    printf("The concatenated string is-->>%s \n\n",str3);
}