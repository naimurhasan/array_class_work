// Created by: Naimur Hasan
// Prints odd index value
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
    if(i%2==1)
      cout << arr[i] << " ";
  }
}
