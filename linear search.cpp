#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{ for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1; }
  int main()
{ int arr[] = { 2, 3, 4, 10, 40 };
    int x = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, size, x);
   if(result==-1)
   {
   cout<<"element is not present in array";
   }
   else
   cout<<"the element is present at index"<<result;

   return 0;
}
