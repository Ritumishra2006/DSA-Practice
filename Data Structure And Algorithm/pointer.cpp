#include<iostream>
#include<vector>
using namespace std;

// void changeA(int *ptr) {
//     *ptr = 20;
// }

// void changeA(int &b) {
    // b = 20;
// }
// 
int main() {
    // int a = 10;
    // int* ptr = &a;

    // int** ptrPar = &ptr;

    // cout << *(ptr) << endl;
    // cout << ptrPar << endl;
    // cout << *(*(ptrPar)) << endl;

    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << *p << endl;
    // cout << **q << endl;
    // cout << p << endl;
    // cout << *q << endl;


    int arr[] = {10,20,30,40};

    // int a = 10;
    int *ptr = arr;

    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;
    ptr++;
    cout << *ptr << endl;
    return 0;
    // changeA(&a);
    // changeA(a);

    // cout << "inside main function : " << a << endl;
    
}