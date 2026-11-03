#include<iostream>
using namespace std;
int main() {
int n = 5;
// char st = char('A'+n-1);
// for(int i = 1; i <= n; i++) {
    // char temp = st;
    // for(int j = 1; j <= i; j++) {
        // cout << temp;
        // temp++;
    // }
    // cout << endl;
    // st = char(st-1);
// }

char ch = 'A';
int len = 5;
for(int i = 1; i <= n; i++) {
    char temp = ch;
    for(int j = i; j <= len; j++) {
           cout << temp;
             temp++;
    }
    cout << endl;
    ch = char(ch+1);
}

    return 0;
}