#include<iostream>
#include<stack>
using namespace std;
void reversestring(char *arr,int length)
{ int i=0;
    stack<char> s;
while(i<length)
{
    s.push(arr[i]);
    i++;
}
i=0;
while(i<length)
{
    arr[i]=s.top();
    s.pop();
    i++;
}
cout<<"output string is  ";
for(int j=0;j<length;j++)
{
    cout<<arr[j];
}

}
int main()
{
char arr[]=" programmer";
int length= sizeof(arr)/sizeof(arr[0]);
cout<<"input string is";
cout<<arr;
cout<<"\n";
reversestring(arr,length);
return 0;
}





