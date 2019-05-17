#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
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
int length(struct node** headref,int count)
{
    struct node* temp=*headref;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    int count;
struct node* head=NULL;
insert(&head,5);
insert(&head,7);
insert(&head,10);
print(&head);
 count=length(&head,0);
cout<<"length of the list is"<<count;
}
