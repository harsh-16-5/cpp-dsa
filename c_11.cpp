// reverse array wothout extra space
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{   
    // int n = sizeof(arr) / sizeof(int);        // we cannot do this
    
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

    int start = 0;
    int end = n-1;
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    
    printArray(arr, n);

    return 0;
}