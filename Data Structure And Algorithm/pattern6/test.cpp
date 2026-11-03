#include<iostream> 
using namespace std;
int main() {
  int n = 7;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(i == 1 || i == n || j == 1|| j== n) {
        cout << "4 ";
      } else if(i == 2|| i == n-1 || j == 2 || j==n-1) {
        cout << "3 ";
      }
      else if(i == 3|| i == n-2 || j == 3 || j==n-2) {
        cout << "2 ";
      }
       else if(i == 4|| i == n-3 || j == 4 || j==n-3) {
   cout << "1 ";
 }
    }
    cout << endl;

    }
  
  return 0;
}