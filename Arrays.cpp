#include <iostream>

using namespace std;

int main()
{

    // print an array elements

    /*int n;
    cout << "Enter array size : " <<endl;
    cin >> n;

    int A[n] ={0,1,2,3,4,8,11,43,71,13};

    for(int x:A){
        cout<<x<<endl;
    }*/

    // Reverse an array

    void reverseArray(int arr[], int start, int end)
    {
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start = start + 1;
            end = end - 1;
        }
    };

    int arr[] = {1, 2, 3};
    int start = arr[0];
    int end = arr[2];
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    cout << n;
}