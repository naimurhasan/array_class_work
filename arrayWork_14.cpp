// Created by: Naimur Hasan
// copy an array to another array
#include <iostream>

using namespace std;

int main()
{
    cout << "Array Size: ";
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    cout << "Copied: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

   

    return 0;
}
