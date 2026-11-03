#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  long long x;
  cin >> n >> x;
  vector<long long> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int ans = 0;

  int i = 0, j = n - 1;
  while (i <= j)
  {
    if (arr[i] + arr[j] <= x)
    {
      i++;
    }
    j--;
    ans++;
  }
  cout << ans << endl;
  return 0;
}