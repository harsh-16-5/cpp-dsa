// reverse array wothout extra space
// my response
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void printArray(int arr[], int n)
{   
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < n / 2; i++ )
    {
        swap(&arr[i], &arr[n-i-1]);   // swap is also an inbuilt function
    }

    printArray(arr, n);

    return 0;
}