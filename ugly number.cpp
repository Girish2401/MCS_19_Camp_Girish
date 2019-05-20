#include<iostream>
using namespace std;
int div(int n,int a)
{
if(n%a==0)
n=n/a;
return n;
}
int isugly(int n)
{

 n= div(n,2);
 n=div(n,3);
 n=div(n,5);
 if(n==1)
 return 1;
 else
 return 0;

}
int ugly(int n)
{
int i=1;
int count=1;
while(count<n)
{
i++;
if(isugly(i))
count++;
}
return i;
}
int main()
{
int n=7;
int result=ugly(n);
cout<<result;
return 0;
}
