// binary search : prerequisite only for sorted array
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,4,6,8,10,12,14,16,18};
    //           0 1 2 3 4  5  6  7  8
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n - 1;
    int key = 22;

    while(start <= end) // see this is applicable for all array if even or odd elements
    {
        int temp = (start + end) / 2;

        if(arr[temp] > key)
        {
            end = temp - 1;
        }
        else if(arr[temp] < key)
        {
            start = temp + 1;
        }
        else if(arr[temp] == key)
        {   
            cout << key << " is at " << temp;
            goto here;
        }
    }
    cout << key << "not fount";
    here:
    return 0;
}