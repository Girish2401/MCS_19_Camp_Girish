#include<bits/stdc++.h>
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
int getnth(struct node** headref,int index)
{int count=0;
    struct node* temp=*headref;
    while(temp!=NULL)
    {if(count==index)
    return temp->data;
        count++;
        temp=temp->next;
    }
}

int main()
{
struct node* head=NULL;
insert(&head,5);
insert(&head,7);
insert(&head,10);
print(&head);
int value=getnth(&head,2);
printf("\nthe value at index %d is %d",2,value);

}
