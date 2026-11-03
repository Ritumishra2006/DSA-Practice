#include<iostream>
#include<set>
using namespace std;
int main() {
  set<int> st;
  int n = st.size();
  cin >> n;
  for(int i = 0; i < n; i++){
   int x;
   cin >> x;
   st.insert(x);
  }
 cout << st.size();
  return 0;
}
