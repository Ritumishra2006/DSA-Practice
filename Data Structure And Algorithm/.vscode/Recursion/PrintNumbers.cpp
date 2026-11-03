#include<bits/stdc++.h> 
using namespace std;
void PrintNumber(int LRange , int URange) {
  if(LRange > URange) 
  return;
   
  cout << LRange << " ";
  PrintNumber(LRange+1, URange);
}
int main() {
  int a , b;
  cin >> a >> b;
  PrintNumber(a+1, b-1);
  return 0;
}