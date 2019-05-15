#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int size)
{int f1=mid-start+1;
int f2=size-mid;
    int left[f1];
int right[f2];
for(int v=0;v<f1;v++)
{
left[v]= arr[start+v];
}
for(int x=0;x<f2;x++)
{
right[x]=arr[mid+1+x];
}
int i=0;
int j=0;
int k=start;
while(i<f1&&j<f2)
{
if(left[i]<=right[j])
{
arr[k]=left[i];
k++;
i++;
}
else
{
arr[k]=right[j];
j++;
k++;
}
}
while(i<f1)
{
arr[k]=left[i];
i++;
k++;
}
while(j<f2)
{
arr[k]=right[j];
j++;
k++;
}}
void mergesort(int arr[],int start,int end)
{
if(start<end){
int mid=(start+end-1)/2;
mergesort(arr,start,mid);
mergesort(arr,mid+1,end);
merge(arr,start,mid,end);
}}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
int arr[]={ 12,11,13,5,6,7};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"before sorting";

print(arr,size);
cout<<"\n";
mergesort(arr,0,size-1);
cout<<"after sorting";
print(arr,size);
return 0;
}
