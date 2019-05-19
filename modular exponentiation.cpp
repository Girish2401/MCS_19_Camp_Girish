#include<bits/stdc++.h>
using namespace std;

int binaryExponentiation(int x,int n)
{
    int result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=result * x;
        x=x*x;
        n=n/2;
    }
    return result;
}
int main()
{
int result;
int a,b;
cout<<"enter values";
cin>>a>>b;
result=binaryExponentiation(a,b);
cout<<result;
return 0;
}
