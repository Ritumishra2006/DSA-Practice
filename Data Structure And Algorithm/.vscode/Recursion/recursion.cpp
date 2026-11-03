#include <iostream>
#include <vector>
using namespace std;

// void printNums(int n)
// {
    // if (n == 1)
    // {
        // cout << "1\n";
        // return;
    // }
    // cout << n << " ";
    // printNums(n - 1);
// }
// 
// int main() {
    // printNums(100);


    // int factorial(int n) {
        // if(n == 0) {
            // return 1;
        // }
        // return n* factorial(n-1);
    // }

    // int main() {

        // cout << factorial(8) << endl;


        // int sum(int n) {
            // if(n == 1) {
                // return 1;
            // }
            // return n + sum(n-1);
        // }
        // int main() {
            // cout << sum(20) << endl;
            // return 0;
        // }

        // bool isSorted(vector<int> arr, int n) {
            // if(n == 0 || n == 1) {
                // return true;
            // }
            // return arr[n-1] > arr[n-2] && isSorted(arr, n-1);
        // }

        // int main() {
            // vector<int> arr = {1, 2, 3, 8, 5};

            // cout << isSorted(arr, arr.size()) << endl;
            // return 0;
        // }



        void printSubsets(vector<int> &arr, vector<int> &ans, int i) {
            if(i == arr.size()) {
                for(int val : ans) {
                    cout << val << " ";
                }
                cout << endl;
                return;
            }

            ans.push_back(arr[i]);
            printSubsets(arr, ans, i+1);

            ans.pop_back();
            printSubsets(arr, ans, i+1);
        }
         int main() {
            vector<int> arr = {1, 2, 3};
            vector<int> ans;

            printSubsets(arr, ans, 0);
            return 0;
         }
    

