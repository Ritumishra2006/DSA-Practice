#include<iostream> 
using namespace std;
int main() {

// for top-left star pattern
  int n = 11;
  int st = 6;
  for(int i = 1; i <= n/2+1; i++) {
    for(int j = 1; j <= st; j++) {
      cout << "*";
  }
  cout << endl;
  st--;
}
//for bottom-left start pattern
 st = 2;
 for(int i = n/2+2; i <= n; i++) {
for(int j = 1; j <= st; j++) {
  cout << "*"; 
}
cout << endl;
st++;
 }

 int sp = 0;
 st = 6;
 for(int i = 1; i <= n/2+1; i++) {
  for(int j = n/2+1; j<=n ; j++) {
    for(int j = n/2+1; j <= sp; j++) {
      cout << " ";
    }
    for(int j = st; j >= 1; j--) {
  cout << "*";
}

 
}
 
 }
 //for top-right star pattern
 } 


  return 0;
}