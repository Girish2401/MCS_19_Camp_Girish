#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[20][20];
int arr1[20][20];
int arr2[20][20];
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cin>>arr1[i][j];
}
}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cin>>arr2[i][j];
}
}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
arr[i][j]=arr1[i][j]+arr2[i][j];
}}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<arr[i][j]<<" ";
}}
}
