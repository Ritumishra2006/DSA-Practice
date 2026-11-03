#include<bits/stdc++.h>
using namespace std;

// void f(int i, int n) {
  // if(i > n){
    // return;
  // }
  // 
  // f(i+1, n);
  // cout << i << endl;
// }
// int main() {
  // int n;
  // cin >> n;
  // f(1,n);
  // void f(int i, int sum) {
    // if(i < 1) {
      // cout << sum;
      // return;
    // }
    // f(i-1, sum+i);
  // }
  // int fact(int n) {
    // if(n == 0) {
      // return 1;
    // } else {
      // return n * fact(n-1);
    // }
  // }

  // int main() {
    // int n;
    // cin >> n;
    // cout << fact(n);
  //
  bool f(int i ,int arr[], int n) {
  if(i >= n/2) 
    return true;
   
  if (arr[i] != arr[n-i-1]){
    return false;
  }
  f(i+1, arr, n);
  } 
  int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
      cin >> arr[i];
    
    f(0, arr, n);
   
  return 0;
}