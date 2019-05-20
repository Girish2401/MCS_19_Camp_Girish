#include<stdio.h>
int fibo(int n)
{
int a=0;
int b=1;
int c;
for(int i=2;i<=n;i++)
{
c=a+b;
a=b;
b=c;
}
return b;
}

int main()
{
int n=5;
int result=fibo(n);
printf("%d",result);
return 0;
}
