#include<bits/stdc++.h> 
using namespace std;

int fibonacci(int n) {
  if(n <= 1) {
    return n;
  }
  int last = fibonacci(n-1);
  int start = fibonacci(n-2);
  return last+start;
}

int main() {
  int i;
  cin >> i;
  cout << fibonacci(i) << endl;
  return 0;
}