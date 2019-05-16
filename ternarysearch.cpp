#include <stdio.h>
int ternarySearch(int l, int r, int key, int ar[])
{
        while (r >= l) {
int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
        if (key < ar[mid1]) {
            r = mid1 - 1;
        }
        else if (key > ar[mid2]) {
            l = mid2 + 1;
        }
        else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}
int main()
{
    int start,end, result, key;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    start = 0;
    end=(sizeof(arr)/sizeof(arr[0]))-1;
    key = 5;
    result=ternarySearch(start,end, key, arr);
printf("Index of %d is %d\n", key, result);
}
