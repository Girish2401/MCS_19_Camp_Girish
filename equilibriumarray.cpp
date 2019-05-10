#include <iostream>
using namespace std;

int equilibrium(int arr[], int n)
{
    int sum = 0;
    int leftsum = 0;


    for (int i = 0; i < n; ++i)
        sum = sum+arr[i];

    for (int i = 0; i < n; ++i)
    {

        sum=sum-arr[i];


        if (leftsum == sum)
            return i;

        leftsum =leftsum+ arr[i];
    }


    return -1;
}
int main()
{
    int arr[] = { 2, 1, 5, 8, 2, 1, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "the equilibrium index is " << equilibrium(arr, size);
    return 0;
}
