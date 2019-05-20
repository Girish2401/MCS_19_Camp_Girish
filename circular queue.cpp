#include<bits/stdc++.h>
using namespace std;
void enqueue(int queue[], int element, int& rear, int arraySize, int& count)
{
    if(count == arraySize)
            cout<<"overflow";
    else{
        queue[rear] = element;
        rear = (rear + 1)%arraySize;
        count = count + 1;
    }
}
void dequeue(int queue[], int& front,int arraysize, int& count) {
    if(count == 0)            // Queue is empty
        cout<<"UnderFlow";
    else {
        queue[front] = 0;        // Delete the front element
        front = (front + 1)%arraysize;
        count = count - 1;
    }
}
int Front(int queue[], int front) {
    return queue[front];
}
void print(int queue[],int& front,int &rear)
{
for(int i=front;i<rear;i++)
cout<<queue[i];
}
int main()
{
int rear=0;
int front=0;
int count=0;
int queue[20];
enqueue(queue,8,rear,20,count);
enqueue(queue,7,rear,20,count);
enqueue(queue,6,rear,20,count);
enqueue(queue,5,rear,20,count);
print(queue,front,rear);
dequeue(queue,front,20,count);
cout<<endl;
print(queue,front,rear);

}
