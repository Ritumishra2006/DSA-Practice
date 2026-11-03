#include <iostream>
using namespace std;
int main() {
int n = 5;
int sp = n-1;
int len = 1;
for(int i = 1; i <= n-1; i++) {
    for(int j = 1; j <= sp; j++) {
        cout << " ";
    }
     for(int j = 1; j <= len; j++) { 
     if(j == 1 || j == len) {
     cout <<  "*";
     }
     else {
        cout << " ";
     }
    }
     cout << endl;
     sp--;
     len+=2;
}
    
    for(int j = 1; j <= 2*n-1; j++) {
        cout << "*";
    
    }
return 0;
}



























