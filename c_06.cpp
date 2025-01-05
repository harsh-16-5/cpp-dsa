// comparing array and pointer
#include <iostream>
using namespace std;

// these two funcctions are same
void func(int arr[])
{
    arr[0] = 1000;
}

void func_2(int *ptr)
{
    ptr[0] = 1000;
}

int main()
{
    // pointer
    int a = 2;
    int *ptr = &a;
    cout << ptr << endl;

    int arr[5] = {1,2,3,4,5};
    cout << arr << endl;
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;

    // func(arr); // passing array name is equivalant to passing any pointer
    // or
    func_2(arr);
    cout << arr[0] << endl;
    return 0;
}   
