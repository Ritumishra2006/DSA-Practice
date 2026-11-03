#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  int i = 1;
  while(i <= n) {
    int j = 1;
    int dig = i;
    while(j <= i) {
      cout << dig;
      dig--;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}