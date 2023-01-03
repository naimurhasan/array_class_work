// Created by: Naimur Hasan
// Print the lowest number from the array
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

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "The lowest number is: " << min << endl;
    
    return 0;
}
