#include<iostream>
using namespace std;
int main()
{
    int n,series,arr[35];
int a1=0;
int a2=1;
int sum=0;
for(int i=0;i<33;i++)
{
 series=a1+a2;
arr[i]=series;
if(arr[i]%2==0)
    {
        sum=sum+arr[i];
    cout<<arr[i]<<" ";
    }
a1=a2;
a2=series;}
    cout<<"the sum of even values in fibonacci series is"<<sum;
}
