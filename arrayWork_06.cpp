// Created by: Naimur Hasan
// Left Shift By One
#include<iostream>
using namespace std;

int main(){
  int i, n;
  cin >> n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin >> arr[i];
  }

  int temp = arr[0];
  for(int i = 0; i<n-1; i++){
    arr[i] = arr[i+1];
  }
  arr[n-1] = temp;

  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }

}
