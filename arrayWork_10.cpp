// Created by: Naimur Hasan
// Search an element in an array
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

    int search_element;
    cout << "Input Search Element: ";
    cin >> search_element;

    int foundIndex = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == search_element){
            foundIndex = i;
            break;
        }
    }

    if(foundIndex == -1){
        cout << "Element not found" << endl;
    }else{
        cout << "Element found at index: " << foundIndex << endl;
    }    
    
    return 0;
}
