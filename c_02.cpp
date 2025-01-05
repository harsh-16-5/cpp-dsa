// printing an array
#include <iostream>
using namespace std;

int main()
{
    int arr[25] = {7, 9, 4, 1, 5};
    int n = sizeof(arr) / sizeof(int);
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}