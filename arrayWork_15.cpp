// Created by: Naimur Hasan
// swaping an array to another array
#include <iostream>

using namespace std;

int main()
{
    cout << "Array Size: ";
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    cout << "Input elements of Arr1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Input elements of Arr2: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        arr[i] = arr2[i];
        arr2[i] = temp;
    }

    cout << "Swaped Arr1: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Swaped Arr2: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
   

    return 0;
}
