#include<iostream>
using namespace std;

bool isSorted(int *arr, int size) {
  //base case
  if(size == 0 || size == 1) {
    return true;
  }

  if(arr[0] > arr[1]) {
     return false;
  } else {
    bool remainingPart = isSorted(arr+1, size-1);
    return remainingPart;
  }
}
int main() {

  int arr[10] = {2, 4, 5, 6, 8, 9, 10, 12, 15 ,18};
  int size = 10;
  bool ans = isSorted(arr, size);

  if(ans) {
    cout << "Array is Sorted " << endl;
  } else {
    cout << "Array is unSorted " << endl;
  }

  return 0;
}