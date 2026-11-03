#include<iostream>
using namespace std;
int main(){
    // int n = 5;
    int n = 7;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
        if(i==1 || i==n || j==1 || j==n) {
             cout << "*";
    } else if (i == j){ 
        cout << "*";
    }
    else if (i+j == n+1) { 
    cout << "*";
} else {
    cout << " ";
}
        }
cout  << endl;
}
return 0;
}