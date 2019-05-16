
#include<iostream>
using namespace std;
int isoperand(char input)
{
if(input>=65&&input<=90||input>=97&&input<=122)
{
return 1;
}
return 0;
}
int isoperator(char input)
{
    switch(input)
    {
    case '+':return 1;
        case '-':return 1;
        case '*':return 1;
        case '/':return 1;
        case '%':return 1;
        case '^':return 1;
        case '(':return 1;
    }
}
int inprec(char input)
{

    switch(input)
    {


    case '+':return 2;
        case '-':return 2;
        case '*':return 4;
        case '/':return 4;
        case '%': return 4;
        case '^': return 5;
}}
int outprec(char input)
{

    switch(input)
    {


    case '+':return 1;
        case '-':return 1;
        case '*':return 3;
        case '/':return 3;
        case '%': return 3;
        case '^': return 6;
}}
void infixtopostfix(char* input)
{int i=0;
   stack<char> s;
while(input[i]!='\0')
{
if(isoperand(input[i]))
{
cout<<input[i];
}
elseif(isoperator(input[i]))
{
    if(s.empty()||outprec(input[i])>inprec(s.top()))
    {
        s.push(input[i]);
    }
    else{
    while(!s.empty&&outprec(input[i])<inprec(s.top()))
    {
        cout<<s.top();
        s.pop();
    }
    s.push(input[i]);
}}
elseif(input[i]==')')
{

    while(s.top()!='(')
    {
        cout<<s.top();
        s.pop();
        if(s.empty())
    {
        printf("invalid input");
        exit(1;)
    }
    }
    s.pop();
}
i++;
}
while(!s.empty())
{
    cout<<s.top();
    s.pop();
}
}
int main()
{
char input[]=  "a+(b*c)";
infixtopostix(input);
return 0;
}
