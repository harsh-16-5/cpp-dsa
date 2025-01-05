// print array function
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

int main(){
    int nums[] = {1,2,3,4,5,6};
    int n = sizeof(nums) / sizeof(int);
    
    printArray(nums, n);
    return 0;
}