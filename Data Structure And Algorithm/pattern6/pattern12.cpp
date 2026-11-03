// #include <iostream>
// using namespace std;
// int main()
// {
  // int n = 5;
  // int len = 1;
  // for(int i = 1; i <= n; i++) {
    // for(int j = 1; j <= len; j++) {
      // cout << j;
        // }
  //  for(int j = i-1; j >= 1; j--)
//  {
  // cout << j;
//  }
    // cout << endl;
    // len++;
  // }
  // return 0;
// }

#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  for(int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if(i == j || i == 1 || i == n || i+j == n+1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}