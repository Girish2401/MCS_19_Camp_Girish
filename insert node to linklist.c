#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
void insert(struct node **headref,int data)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=*headref;
*headref=temp;
}
void insertafter(struct node **headref,int after,int newdata)
{

    struct node*temp1=*headref;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=newdata;
temp->next=NULL;
while(temp1->data!=after)
{
    temp1=temp1->next;
}
temp->next=temp1->next;
temp1->next=temp;
}
void appendend(struct node** headref,int data)
{
    struct node*temp1=*headref;
        struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=NULL;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;

}
void print(struct node **headref)
{
struct node* temp=*headref;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
int main()
{
struct node* head=NULL;
insert(&head,5);
insert(&head,7);
insert(&head,10);
insertafter(&head,7,8);
appendend(&head,9);
print(&head);
return 0;
}
