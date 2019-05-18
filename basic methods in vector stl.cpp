#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int> g1;
    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 15);
 cout << "\nReferenceoperator :g1[3] ="<<g1[3];
 cout<<"\nat:g1.at(9) = "<<g1.at(9);
cout << "\nfront() : g1.front() = " << g1.front();
    cout << "\nback() : g1.back() = " << g1.back();
    int* pos = g1.data();
cout << "\nThe first element is " << *pos;
    return 0;
}
