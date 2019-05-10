#include<iostream>
using namespace std;
int maxSum(int a[], int size)
{
    int endsum  = 0;
    int sumateverypoint=0;

    for (int i = 0; i < size; i++)
    {
        sumateverypoint = sumateverypoint + a[i];
        if (endsum < sumateverypoint)
            endsum = sumateverypoint;

        if (sumateverypoint< 0)
            sumateverypoint = 0;
    }
    return endsum;
}

int main()
{
    int a[] = {2, -5, 4, 2, 3, 1, -5, -6};
    int n = sizeof(a)/sizeof(a[0]);
    int total = maxSum(a, n);
    cout<< "Maximum  sum is " << total;
    return 0;
}
