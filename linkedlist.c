#include<stdio.h>
#include<stdio.h>
void insert();
void display();
void delete();
typedef struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;
void main()
{
    int m;
    do
    {
    printf("\n 1.insert");
    printf("\n 2.delete");
    printf("\n 3.display");
    printf("\n 4.exit");
    printf("\n nter your choice: \n");
    scanf("%d",&m);
    switch(m)
    {
    case 1:insert();
           break;
    case 2:delete();
           break;
    case 3:display();
           break;
    case 4:m=0;
    }       
}
while(m);
}
void display()
{
       struct node *temp=head;
       if(head==NULL)
       {
              printf("Empty linked list \n");
       }
       else{
              while(temp!=NULL)
              {
                     printf("->|%d|%u|",temp->data,temp->link);
                     temp=temp->link;
              }
       }   
}
void insert()
{
       struct node *p,*temp=head;
       int x;
       p=(struct node*)malloc(sizeof(struct node));
       printf("Enter your data \n");
       scanf("%d",&x);
       p->data=x;
       p->link=NULL;
       if(head==NULL)
       {
              head=p;
       }
       else{
              while(temp->link!=NULL)
              {
                     temp=temp->link;
              }
              temp->link=p;
       }
}
void delete()
{
       struct node *temp1,*temp2;
       temp1=head;
       temp2=NULL;
       if(head==NULL)
       {
              printf("Invalid operation \n");
       }
       else{
              while(temp1->link!=NULL)
              {
                     temp2=temp1;
                     temp1=temp1->link;
              }
              if(temp2==NULL)
              {
                     head=NULL;
              }
              else{
                     temp2->link=NULL;
              }
              int x=temp1->data;
              free(temp1);
       }
}

