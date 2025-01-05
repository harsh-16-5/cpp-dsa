// taking input
#include <iostream>
using namespace std;

int main()
{
    
    int arr[5];
    int n = sizeof(arr) / sizeof(int);

    // taking inputs
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // printing an array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}