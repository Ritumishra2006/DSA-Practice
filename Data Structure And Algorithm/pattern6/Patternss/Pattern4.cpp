#include<iostream>
using namespace std;
int main()
{
  int n = 4;
  int i = 1;
  while(i <= n) {
    int sp = 1;
    while(sp <= n-i) {
      cout << " ";
      sp++;
    }
    int st = 1;
    while(st <= 2*i-1) {
      cout << "*";
      st++;
    }
    cout << endl;
    i++;
  }
  return 0;
}