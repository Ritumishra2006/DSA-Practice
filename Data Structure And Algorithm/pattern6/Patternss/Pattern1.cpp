#include<iostream>
using namespace std;
int main()
{
  int n = 5;
  int i = 1;
    while(i <= n) {
      int j = 1;
      int sp = 1;
         while(sp <= n-i) {
          cout << " ";
          sp++;
         }
        j = 1;
         while(j <= i) {
          cout << "*";
            j++;
         }
         cout << endl;
         i++;
         
         
    }
    
  
  return 0;
}