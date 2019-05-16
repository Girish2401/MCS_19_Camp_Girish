#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
struct node* next;
};
void insert(struct node** headref,int newdata)
{
struct node* temp1= (struct node*)malloc(sizeof(struct node));
temp1->data=newdata;
temp1->next=*headref;
*headref=temp1;
}
 void reversestr(struct node**headref)
{
stack<struct node*> s;
struct node* temp=*headref;
if(temp==NULL)
    return;
while(temp!=NULL)
{
s.push(temp);
temp=temp->next;
}
temp=s.top();
*headref=temp;
s.pop();
while(!s.empty())
{
    temp->next=s.top();
    s.pop();
    temp=temp->next;
}
temp->next=NULL;
}
void print(struct node** headref)
{
    struct node* temp=*headref;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
struct node* head=NULL;
insert(&head,7);
insert (&head,5);
insert(&head,9);
printf("the input string is");
print(&head);
printf("the reverse string is");
reversestr(&head);
print(&head);
}
