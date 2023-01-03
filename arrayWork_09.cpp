// Created by: Naimur Hasan
// Right Shift From Particular Index
#include <iostream>

using namespace std;

int main()
{
    cout << "Array Size: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Input shift index: ";
    int shift_index;
    cin >> shift_index;
    
    int tempArr[shift_index+1];
    for (int i = 0; i < shift_index+1; i++)
    {
        tempArr[i] = arr[i];
    }

    for (int i = 0; i < n-shift_index-1; i++)
    {
        arr[i] = arr[i+shift_index+1];
    }

    for (int i = 0; i < shift_index+1; i++)
    {
        arr[n-shift_index-1+i] = tempArr[i];
    }

    cout << "The shifted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
