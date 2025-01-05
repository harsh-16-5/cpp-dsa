// revers an array using extraspace
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

    int copyArr[n];
    
    // store reverse values in reverse array
    for(int i = 0; i < n; i++ )
    {
        copyArr[i] = arr[n - i - 1];
    }

    // storing reverse arrays value in to original array
    for(int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }


    printArray(arr,n);
    // arr[] = reverse_arr[];

    return 0;
}