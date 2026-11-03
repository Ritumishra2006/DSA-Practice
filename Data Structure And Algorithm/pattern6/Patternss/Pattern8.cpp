#include <iostream>
using namespace std;
int main()
{
  int n = 6;
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    int st = 1;
      if (i % 2 != 0)
      {
        st = i+1;
      } else {
        st = i;
      }
      while (j <= st) {
        cout << "*";
        j++;
      }
    cout << endl;
    i++;
  }
  return 0;
}