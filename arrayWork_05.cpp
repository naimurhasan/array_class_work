// Created by: Naimur Hasan
// Sum of Array
#include<iostream>
using namespace std;

int main(){
  int i, n;
  cin >> n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin >> arr[i];
  }

  int sum = 0;
  for(int i = 0; i<n; i++){
    sum += arr[i];
  }

  cout << "Sum: " << sum;
}
