// Created by: Naimur Hasan
// User defined size
#include<iostream>
using namespace std;

int main(){
  int i, n;
  cin >> n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin >> arr[i];
  }

  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
  
}
