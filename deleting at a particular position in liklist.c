#include<stdio.h>
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
void delpos(struct node** headref,int pos)
{int i;
    struct node*temp=*headref;
    if(temp==NULL)
        printf("list is empty cant delete");
        if(pos==0)
        {
            *headref=temp->next;
            free(temp);
        }
    for(i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    struct node*temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
}

int main()
{
struct node* head=NULL;
insert(&head,5);
insert(&head,7);
insert(&head,10);
printf("initial list\n");
print(&head);
delpos(&head,1);
printf("\nafter deleting at particular position\n");
print(&head);
}
