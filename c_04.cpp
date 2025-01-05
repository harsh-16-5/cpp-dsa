// taking input
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];

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