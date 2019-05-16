#include<iostream>
using namespace std;
int MAXSIZE=10;
int top=-1;
int arr[10];
void push(int x)
{
if(top==MAXSIZE-1)
{
cout<<"the array is full cant push";
}
else
{
arr[++top]=x;
}
}
void pop()
{
if(top==-1)
{
cout<<"the stack is empty";
}
else
{
top=top-1;
}
}
void topelement()
{
if(top==-1)
{
cout<<"the stack is empty no top elements to show";
}
else
{
cout<<"the top is"<<arr[top];
}
}
void isempty()
{
if(top==-1)
cout<<"the stack is empty";
else
cout<<"the stack is not empty";
}
void print()
{
    cout<<"the stack is";
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{

push(3);
push(5);
push(7);
pop();
topelement();
isempty();
print();
}
