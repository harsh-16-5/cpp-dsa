// linear search search for a key  = 10
#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {0,1,4,6,7,8,10,12,14,18,30};
    int n = sizeof(arr) / sizeof(int);
    int key = 10;

    cout << linearSearch(arr, n, 10);
    return 0;
}