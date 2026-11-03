#include <iostream>
using namespace std;

int main() {
    long long n,k;
    cin >> n >> k;
    long long t = (n+1)/2;
    long long ans;  
    if(k <= t) {
        ans = 2*k-1;
    }else {
        ans = 2*(k-t);
    }
    cout << ans;
    return 0;
}