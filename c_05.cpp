// finding max
#include <iostream>
using namespace std;

int main()
{
    int marks[] = {5, 4, 3, 9, 12};
    int n = sizeof(marks) / sizeof(int);
    
    int max = marks[0];
    int min = marks[0];
    for(int i = 0; i < n; i++)
    {   
        if(max < marks[i])
        {
            max = marks[i];
        }

        if(min > marks[i])
        {
            min = marks[i];
        }
    }
    cout << "max is : " << max << endl;
    cout << "min is : " << min;
    return 0;
}