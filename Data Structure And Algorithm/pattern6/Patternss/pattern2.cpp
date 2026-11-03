#include <iostream>
using namespace std;
int main() {
int n = 9;
// int st;
// int sp ;
// for(int i = 1; i <= n; i++) {
//     if(i == 1 || i == n) {
//     for(int j = 1; j <= n/2; j++) {
//         cout << " ";
//     }
//         cout << "*";
//     }
//     else if(i == n/2+1) {
//         for(int j = 1; j <= n; j++) {
//             cout << "*";
//         }
//     }
//     else if (i == 2 || i == n-1) {
//         for(int j = 1; j <= n/2-1; j++){
//             cout << " ";
//         }
//         for(int j = 1; j <= n/2-1; j++) {
//             cout << "*";
//         }
//     }
//     else if(i == 3 || i == n-2) {
//         for(int j = 1; j <= 2; j++) {
//             cout << " ";
//         }
//         cout << "*";
//         cout << " ";
//         cout << "*";
//         cout << " ";
//         cout << "*";
//     }
//     else {
//         cout << " ";
//         cout << "*";
//       for(int j = 3; j <= 4; j++) {
//         cout << " ";
//       }
//       cout << "*";
//        for(int j = 6; j <= 7; j++) {
//    cout << " ";
//  }
//  cout << "*";
//     }
//  cout << endl;
    
// }

int sp = n/2;
int len = 1;
for(int i = 1; i <= n/2; i++) {
    for(int j = 1; j <= sp; j++) {
        cout << " ";
    }
    for(int j = 1; j <= len; j++) {
        if(j == 1 || j == len/2+1 || j == len){
            cout << "*";
        }else {
            cout << " ";
        }
    }
    cout << endl;
    
    len+=2;
    sp--;
}
len = n;
for(int j = 1; j <= len; j++) {
    cout << "*";
}
cout << endl;
sp = 1;
len-=2;
for(int i = n/2+2; i <= n; i++) {
for(int j = 1; j <= sp; j++) {
    cout << " ";
}
for(int j = 1; j <=len; j++) {
    if(j == 1 || j == len/2+1 || j==len) {
        cout << "*";
    }else {
        cout << " ";
    }
} 
cout << endl;
sp++;
len-=2;
}
    return 0;
}
