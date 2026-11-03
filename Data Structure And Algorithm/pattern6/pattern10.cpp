#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int l = n;
    int r = n;
    int st = 1;
    int sp = 1;
    for(int i =1; i <= n; i++) {
        for(int j = 2; j <= sp; j++) {
            cout << " ";
            }
            for(int j = 1; j <= l; j++) {
                cout << st;
                cout << "*";
                st++;
    
            }
            cout << endl;
            l--;
            sp++;
    }
    

    return 0;
}