#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int min(int a, int b)
{
    if(a >b)
      return b;
      else
      return a;
}
void toggleElements(int arr[], int n)
{
    int negative=0, positive=1, i=0;

    // adjust negative elemets first on odd index
    while(i<n)
    {
        if(arr[i] < 0 && negative <n)
        {
            swap(&arr[i], & arr[negative]);
            negative+=2;
        }
        i++;
    }
    i=0;
    // adjust positive elemets  on even index
    while(i<n)
    {
        if(arr[i] >= 0 && positive <n)
        {
            swap(&arr[i], & arr[positive]);
            positive+=2;
        }
        i++;
    }
}
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {-5, 3,2, -1, -4, 5, -6,-1,  -2, 8, 9, -1, -4};
    toggleElements(arr,  sizeof(arr)/sizeof(arr[0]));
    printArray(arr, sizeof(arr)/sizeof(arr[0]));
}
