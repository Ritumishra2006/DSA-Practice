#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar) {
    int st = 0, end = arr.size()-1;

    while(st <= end) {
        int mid = (st + end) / 2;

        if(tar > arr[mid]) {
            st = mid + 1;
        } else if (tar < arr[mid]) {
            end = mid - 1;
        }else{
            return mid;
        }
    }
    return -1;
} 

int main() {
    vector<int> arr1 = {-1, 0,3,4,5,9,12};
    int tar1 = 40;

    cout << binarySearch(arr1, tar1) << endl;

    int tar2 = 10;
}

    //  int marks[5] = {99, 100, 54, 36, 88};
    //  int size = 5;
    //  
    //  cout << sizeof(marks) << endl;
    // int size = 5;
    // int marks[size];

    // for(int i=0; i<size; i++){
        // cin >> marks[i];
    // }

    // for(int i=0; i<size; i++){
        // cout << marks[i] << endl;
    // }


    // int nums[] = {5, 15, 22, 1, -15, -24};
    // int size = 6;
    // int INT_MAX;
    // int INT_MIN;

    //  int smallest = INT_MAX;
    //  int largest = INT_MIN;

    //  for(int i = 0; i<size; i++) {
        // if(nums[i] < smallest); {
        // smallest = nums[i];
    //   smallest = min(nums[i], smallest);
    //   largest = max(nums[i], largest);    
    //  }

    //  cout << "smallest = " << smallest << endl;
    //  cout << "largest = " << largest << endl;
    //  return 0;

    // call by reference linear search/

// void changeArr(int arr[],int size) {
    //   cout << "in function\n";
    //   for(int i=0; i<size; i++) {
    //   arr[i] = 2* arr[i];
    //   }
    //   }
// 
//  int LinearSearch(int arr[], int sz, int target) {
//  for(int i = 0; i < sz; i++){
    // if (arr[i] == target) {
        // return i;
    // }
//  }
//  return -1;
// }
// int main() {
    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int sz = 7;
    // int target = 50;

// 
//    cout << LinearSearch(arr, sz, target) << endl;
    // return 0;
// }

// void reverseArr(int arr[], int sz) {
    // int start = 0, end = sz-1;
        //  
    // while(start<end){
        // swap(arr[start], arr[end]);
        // start++;
        // end--;
    // }
// }
    // 
    // int main() {
        // int arr[] = {4,2,7,8,1,2,5};
        // int sz = 7;
// 
        // for(int i=0; i<sz; i++){
            // cout << arr[i] << " ";
        // }
        // cout << endl;
        // return 0;
    // }

// void productAndsumOfArr(int arr[], int sz) {
    //  int start = 0; int end = sz-1;
    //  int sumOfArr=0; int productOfArr = 1;
    //   
    //  if(sum += )

// int main() {
    // int arr[] = {2,4,5,3,6,7,8};
    // int sz = 7;
    // 
// 
    // for (int i=0; i<sz; i++){
    //    
        // return 0;
    // }
// }