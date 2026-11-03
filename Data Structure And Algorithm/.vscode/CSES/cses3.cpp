#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<long long> slen(n);
  for(int i = 0; i < n; i++) {
    cin >> slen[i];
  }
    sort(slen.begin(),slen.end());
    int mid = n/2;
    long long sum = 0;
    for(int i = 0; i < n; i++) {
    long long cost = abs(slen[mid] - slen[i]);
     sum+=cost;
    }
     cout << sum;

  
  return 0;
}