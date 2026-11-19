//C. Subarrays//

#include<bits/stdc++.h> 
using namespace std;
int main() {

  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      long long sum = 0;
      for(int j = i; j < n; j++) {
        sum += arr[j];
        int len = j-i+1;

          if(sum%k == 0 && len > k) {
            cnt++;
          }
        }
        
      }
      cout << cnt << endl;
  }
  return 0;
}
