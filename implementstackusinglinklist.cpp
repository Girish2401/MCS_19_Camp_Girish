#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
void push(struct node**headref,int x)
{
struct node*temp=*headref;
struct node*newnode= (struct node*) malloc(sizeof(struct node));
newnode->data=x;
newnode->next=*headref;
*headref=newnode;
}
void pop(struct node**headref)
{
struct node*temp=*headref;
if(temp==NULL)
{printf("cant delete");
return;
}
*headref=temp->next;
free(temp);
}
void top(struct node**headref)
{
    struct node*temp=*headref;
    if(temp==NULL)
    {
        printf("the stack is empty");
    }
    else
    {
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    printf("\n the top is %d",temp->data);

    }
}
void empty(struct node**headref)
{

    if(*headref==NULL)
    {
        printf("\nthe stack is empty");
    }
    else
    {
        printf("\nthe stack not empty");
    }
}
void print(struct node**headref)
{
    struct node*temp=*headref;
    printf("\nthe list is ");
    while(temp!=NULL)
    {

        printf("\t%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
struct node*head=NULL;
empty(&head);

push(&head,5);
push(&head,7);
push(&head,9);
pop(&head);

print(&head);
top(&head);
empty(&head);
}
