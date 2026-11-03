#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    multiset<long long> st;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        st.insert(x);
    }

    long long target = 1;

    for (auto x : st) {
        if (x > target) {
            break;
        }

        target += x;
    }

    cout << target << endl;

    return 0;
}
