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
int search(struct node**headref,int key)
{int count =0;
    struct node* temp=*headref;
    while(temp!=NULL)
    {
        if(key==temp->data)
        {
            return count;

        }
        count++;
        temp=temp->next;

    }
    return -1;
}


int main()
{
struct node* head=NULL;
insert(&head,5);
insert(&head,7);
insert(&head,10);
print(&head);
int result=search(&head,7);
if(result!=-1)
    printf("\nelement is present and it is at index %d",result);
else
    printf("element not present");
}
