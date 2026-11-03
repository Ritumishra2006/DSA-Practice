#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
       cout << f;  
       f = 1-f; 
    }
      cout << endl;
      if (i % 2 != 0){
        f = 1;
      }
      else {
        f = 0;
      }
         
      }
  return 0;
}
// int n = 4;
// int i = 1;
// int f = 1;
// while (i <= n)
// {
// int dig = 1;
//
// while (dig <= i)
// {
// cout << f;
// f = 1-f;
// dig++;
// }
// cout << endl;
// i++;
// if(i%2 == 1)
// f = 1;
// else
// f = 0;
// }
// return 0;
// }