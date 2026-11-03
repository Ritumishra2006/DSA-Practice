#include <iostream>
using namespace std;

int main () {
    char str[] = " apna college";
    int len = 0;

    // cout << "enter char Array : ";
    // cin >> str;
    // cin.getline(str, 100, '$');
    //(str, len, delim)

    for ( int i = 0; i < str[i] != '\0'; i++) {
        len++;
    }

    cout << "length of string : " << len << endl;
    return 0;
}