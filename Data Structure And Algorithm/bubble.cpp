// Bubble Sort
#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {

    for(int i = 0; i < n-1; i++) {
        bool isSwap = false;

        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return ;
        }
    }
}

void printArray (int arr[], int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n ){

     for(int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] < curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
}
      }
int main() {
    int n = 5;
    int arr[] = {20,57,52,82,78};

    insertionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}
