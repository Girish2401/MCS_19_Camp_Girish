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
void print(struct node **headref)
{
struct node* temp=*headref;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
void delbeg(struct node **headref)
{
    struct node*temp=*headref;
    *headref=temp->next;
    free(temp);
}
void delafter(struct node** headref,int after)
{
    struct node* temp=*headref;
    while(temp->data!=after)
    {
        temp=temp->next;
    }
    struct node* temp1= temp->next;
    temp->next=temp1->next;
    free(temp1);
}
delend(struct node **headref)
{
    struct node * temp=*headref;
    struct node* prev=NULL;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);



}
int main()
{
struct node* head=NULL;
insert(&head,5);
insert(&head,7);
insert(&head,10);
insert(&head,6);
insert(&head,8);
printf("initial list is\n");
print(&head);
printf("\ndeleting at beginning\n");
delbeg(&head);
print(&head);
delafter(&head,10);
printf("\ndelete after given value\n");
print(&head);
delend(&head);
printf("\ndeleting at end\n");
print(&head);
}
