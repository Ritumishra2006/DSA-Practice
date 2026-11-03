#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  int maxi = -1e9;
  for (int i = 0; i < n; i++)
  {
    int curr = arr[i];
    for (int j = i+1; j < n; j++)
    {
      if (arr[j] == curr)
      {
        int dis = (j-i);
        maxi = max(dis, maxi);
        cout << maxi;
      }
      else
      {
        cout << 0;
      }
    }
  }
  return 0;
}