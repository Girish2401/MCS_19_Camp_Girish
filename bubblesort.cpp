#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
int temp=*p;
*p=*q;
*q=temp;
}
void bubblesort(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{
int flag=1;
for(int j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
swap(&arr[j],&arr[j+1]);
flag=0;
}}
if(flag==1)
return;

}
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
int arr[]={5,3,2,4,1};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"the array before sorting";
print(arr,size);
bubblesort(arr,size);
cout<<"the array after sorting";
print(arr,size);
}
