#include<iostream>
using namespace std;
 void zeroestoend(int arr[],int n)
{
int count=0;
for(int i=0;i<n;i++)
{
if(arr[i]!=0)
{
arr[count]=arr[i];
count++;
}}
while(count<n)
{
arr[count]=0;
count++;
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}

int main()
{
int arr[]={2,0,0,3,0,4};
int size=sizeof(arr)/sizeof(arr[0]);
zeroestoend(arr,size);

return 0;
}
