#include <bits/stdc++.h>
using namespace std;
bool isOne(int i)
{
    if (i == 1)
        return true;
    else
        return false;
}
int main()
{

    int arr[] = { 1, 0, 0, 1, 0, 0, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = count_if(arr, arr + size, isOne);
    cout << "1's: " << count << endl;
    int x=(size - count);
    cout << "0's: " << x;
    return 0;
}
