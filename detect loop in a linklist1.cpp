#include<bits/stdc++.h>
using namespace std;
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
int detectloop(struct node** list)
{
   struct node* slow = *list;
   struct node* fast= *list;

    while (slow&&fast&&fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            cout << "Found Loop";
            return 1;
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
head->next->next=head;
detectloop(&head);
}
