#include <iostream>
using namespace std;

<<<<<<< HEAD
void print(int arr[], int s, int e)
{
  for (int i = 0; i <= e; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k)
{
  cout << endl;
  print(arr, s, e);
=======
void print(int arr[], int s, int e) {
  for(int i = 0; i <= e; i++) {
    cout << arr[i] << " ";
  } cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k)
{  cout << endl;
   print(arr, s, e);
>>>>>>> aa1c8e5 (Linear Search)
  // base case
  // element not found
  if (s > e)
  {
    return false;
  }
<<<<<<< HEAD

  int mid = s + (e - s) / 2;

  // element found
=======
  
  int mid = s + (e - s) / 2;

  //element found
>>>>>>> aa1c8e5 (Linear Search)
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

<<<<<<< HEAD
  cout << "Present or not " << binarySearch(arr, 0, 8, key) << endl;
=======
  cout << "Present or not " <<  binarySearch(arr, 0, 8, key) << endl;
>>>>>>> aa1c8e5 (Linear Search)

  return 0;
}