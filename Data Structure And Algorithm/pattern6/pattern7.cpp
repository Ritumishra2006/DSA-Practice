#include<iostream>
using namespace std;
int main() {
    int n = 5;
    int sp = n-1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sp; j++) {
            cout << " ";
        } 
        int len = i;

        for(int j = 1; j <= i; j++) {
                cout << len;
                len++;
            } 
           len -= 2;
           for(int j = 1; j <= i-1 ; j++) {
            cout << len;
            len--;
           }
    
    cout << endl;
    sp--;

    }
    return 0;
}