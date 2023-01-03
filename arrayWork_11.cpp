// Created by: Naimur Hasan
// Print the heighest number from the array
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

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The heighest number is: " << max << endl;
    
    return 0;
}
