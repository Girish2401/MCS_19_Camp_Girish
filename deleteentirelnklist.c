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
if(temp==NULL)
    printf("list is empty");
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
void delete(struct node** headref)
{
    struct node *temp=*headref;
    while(temp!=NULL)
    {
        struct node*next=temp->next;
        free(temp);
        temp=next;
    }
    *headref=NULL;
}
int main()
{
struct node* head=NULL;
insert(&head,5);
insert(&head,7);
insert(&head,10);
print(&head);
delete(&head);
printf("\nafter deleting\n");
print(&head);
}
