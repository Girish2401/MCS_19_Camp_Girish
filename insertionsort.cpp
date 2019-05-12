#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
for(int i=1;i<n;i++)
{
int elem=arr[i];
int hole=i;
while(hole>0&&arr[hole-1]>elem)
{
arr[hole]=arr[hole-1];
hole=hole-1;
}
arr[hole]=elem;
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
int arr[]={5,3,4,2,1};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"array before sorting"<<" ";
print(arr,size);
insertionsort(arr,size);
cout<<"array after sorting"<<" ";
print(arr,size);

}
