#include <iostream>
using namespace std;

void print(int arr[], int s, int e) {
  for(int i = 0; i <= e; i++) {
    cout << arr[i] << " ";
  } cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k)
{  cout << endl;
   print(arr, s, e);
  // base case
  // element not found
  if (s > e)
  {
    return false;
  }
  
  int mid = s + (e - s) / 2;

  //element found
  if (arr[mid] == k)
  {
    return true;
  }

  if (arr[mid] < k)
  {
    return binarySearch(arr, mid + 1, e, k);
  }

  else
  {
    return binarySearch(arr, s, mid - 1, k);
  }
}

int main()
{

  int arr[9] = {1, 2, 5, 9, 10, 13, 18, 20, 22};
  int size = 9;
  int key = 20;

  cout << "Present or not " <<  binarySearch(arr, 0, 8, key) << endl;

  return 0;
}