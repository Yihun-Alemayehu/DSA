#include <iostream>

using namespace std;

int binarySearch(int arr[], int key)
{
    int n = 5, index = 0;
    int found = 0;
    int top = n - 1, bottom = 0, middle;

    do
    {
        middle = (top + bottom) / 2;
        if (key == arr[middle])
        {
            found = 1;
        }
        else if (key < arr[middle])
        {
            top = middle - 1;
        }
        else
        {
            bottom = middle + 1;
        }
    } while (found == 0 && top >= bottom);

    if (found == 0)
    {
        index = -1;
    }
    else
    {
        index = middle;
    }
    return index;
}

int main()
{
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
    };
    int key = 4;
    cout << binarySearch(arr, key);
};