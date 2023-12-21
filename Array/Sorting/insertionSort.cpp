#include <iostream>

using namespace std;

int main()
{
    int n = 7, key, j;
    int arr[] = {2, 6, 1, 4, 3, 7, 5};

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}