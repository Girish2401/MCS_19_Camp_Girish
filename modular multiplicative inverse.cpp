
#include<iostream>
using namespace std;
int modInverse(int X,int M)
{
    X=X%M;
    for(int B=1;B<M;B++)
       {

        if(((X*B)%M)==1)
            return B;}
}
int main()
{
int result=modInverse(5,12);
cout<<result;
}
