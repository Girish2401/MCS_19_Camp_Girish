#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
int partition(int arr[],int st,int end)
{
int pivot=arr[end];
int pindex=st;
for(int i=st;i<=end-1;i++)
{
if(arr[i]<pivot)
{
swap(&arr[i],&arr[pindex]);
pindex=pindex+1;
}
}
swap(&arr[pindex],&arr[end]);
return pindex;
}
void quicksort(int arr[],int st,int end)
{
    if(st<end)
    {
int pindex=partition(arr,st,end);
quicksort(arr,st,pindex-1);
quicksort(arr,pindex+1,end);
}}
int main()
{
int arr[]={5,4,6,3,1,2};
quicksort(arr,0,5);
for(int i=0;i<6;i++)
{
cout<<arr[i]<<" ";
}
}
