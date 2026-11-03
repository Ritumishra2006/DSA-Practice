#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
int cnt1 = 0;
int cnt2 = 0;

for(int i = 0; i < n; i++) {
  int x;
  cin >> x;
   
  if(x > 0) {
    cnt1 += x;
  } else if (cnt1 > 0){
     cnt1--;
  } else {
     cnt2++;
  }
}
cout << cnt2;

  return 0;
}
