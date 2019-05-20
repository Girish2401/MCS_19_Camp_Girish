#include <bits/stdc++.h>
using namespace std;
void enqueue(char queue[], char element, int& rear, int Size)
{
    if(rear == Size)
        printf("OverFlow\n");
    else {
        queue[rear] = element;
        rear++;
    }
}
void dequeue(char queue[], int& front, int rear)
{
    if(front == rear)
        printf("UnderFlow\n");
    else
        {
        queue[front] = 0;
        front++;
    }
}
char Front(char queue[], int front)
{
    return queue[front];
}
int main() {
    char queue[20] = {'a', 'b', 'c', 'd','e'};
    int front = 0, rear = 5;
    int size = 20;
    int N = 4;
    char ch;
    for(int i = 0;i < N;++i) {
        ch = Front(queue, front);
        enqueue(queue, ch, rear, size);
        dequeue(queue, front, rear);
    }
    for(int i = front;i < rear;++i)
        printf("%c", queue[i]);
    return 0;
}
