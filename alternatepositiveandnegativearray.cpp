 #include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void orderingElements(int arr[], int n)
{
    int negative=0, positive=1, i=0;


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
void printtheArray(int arr[], int n)
{
    cout<<"The final array is" ;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {-5, 2,5, -8, -6, 8, -8,-5,  -3, 8, 9, -2, 4};
    int size=sizeof(arr)/sizeof(arr[0]);
    orderingElements(arr, size );
    printtheArray(arr,size);
}
