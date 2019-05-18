#include<bits/stdc++.h>
using namespace std;
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
int count(struct node** n)
{
    struct node *temp=*n;
    int count1=1;
    while(temp->next!=*n)
    {
        count1++;
        temp=temp->next;
    }
    return count1;
}
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
int detectloop(struct node** list)
{
   struct node* slow = *list;
   struct node* fast= *list;

    while (slow&&fast&&fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            cout << "Found Loop";
            return count(&slow);
        }
    }
    cout<<"loop not found";
    return 0;
}

int main()
{
struct node* head=NULL;
insert(&head,5);
insert(&head,7);
insert(&head,10);
print(&head);
head->next->next->next=head;
int result=detectloop(&head);
printf("length of loop is %d",result);
}
