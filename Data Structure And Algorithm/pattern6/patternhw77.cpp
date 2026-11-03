#include<iostream>
using namespace std;
int main() {
    int n = 15;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == n/2+1 || j == n/2+1) {
                cout << "*";
            }
            else if(i+j == n/2+2 || j-i == n/2 || i-j == n/2 || i+j == 2*n-n/2) {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}