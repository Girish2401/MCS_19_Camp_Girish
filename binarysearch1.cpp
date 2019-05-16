#include<iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int x)
{
    if (end>= start) {
        int mid = start+(end - start)/2;
        if (arr[mid] == x)
            return mid;
        if (x<arr[mid])
            return binarySearch(arr, start, mid - 1, x);

         return binarySearch(arr, mid + 1, end, x);
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2,4,7,8,10 };
    int size = sizeof(arr)/ sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, size - 1, x);
    if(result == -1)
        cout<<"element is not present in array";
    else
        cout<<"element is present in array at index"<<result;
    return 0;
}
