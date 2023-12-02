#include <iostream>

using namespace std;

// Iterative way

/*void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
    };
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
}*/

// Recursive way

/*void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
}*/

// String reverse

string reverseString(string &str)
{
    int n = str.length();
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    return str;
}

int main()
{
    string str = "remmargorp";
    reverseString(str);
    cout << str << endl;
}