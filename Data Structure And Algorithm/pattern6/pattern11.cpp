#include <iostream>
using namespace std;


int main()
{
    int n = 5;
    int f = 0;
    int st = 1;
    int temp;
    for(int i = 1; i <= n; i++) {
        if(f==0) {
        temp = st;
        }
        else {
            temp = st+i-1;
        }
        for(int j = 1; j <= i; j++) {
             cout << temp;
             if(j != i) {
                cout << "*";
             }
             if(f == 0)
             temp++;
             else {
                temp--;
             }
        }
        f = 1-f;
        st+=i;
        cout << endl;
    }
    return 0;
}