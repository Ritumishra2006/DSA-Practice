#include <iostream>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  long long count = 0;
  long long luckDig;

  while (n > 0)
  {
    luckDig = n % 10;
    n /= 10;
    if (luckDig == 4 || luckDig == 7)
      count++;
  }
  if(count == 0) {
    cout << "NO";
    return 0;
  }
  while (count > 0)
  {
    luckDig = count % 10;
    count /=10;
    if (luckDig != 4 && luckDig != 7)
    {
      cout << "NO";
      return 0;
    }

    else
    {

      cout << "YES";
    }
  }
  return 0;
}