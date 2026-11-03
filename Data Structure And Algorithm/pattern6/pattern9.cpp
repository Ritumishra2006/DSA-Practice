#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int sp = 0;
    char ch = 'G';
    int len = n*2-3;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sp; j++) 
            cout << " ";
            cout << ch;
    
     if(i != n) {
        for(int j = 1; j <= len; j++) 
        cout << " ";
        cout << ch;
        len-=2;
     }
     cout << endl;
     sp++;
    ch--; 
        
    }
    return 0;
}