#include <iostream>
#include <algorithm>

using namespace std;


// find max and min  using builtin functions
int main()
{
    int arr[] = {3, 6, 1, 8, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "minimum = " << arr[0] << endl;
    cout << "maximum = " << arr[n - 1] << endl;
}


// Using custom function

