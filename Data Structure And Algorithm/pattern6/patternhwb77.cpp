// #include <iostream>
// using namespace std;
// int main()
// {
    // int n = 4;
    // int len = 1;
    //
    // for(int i = 1; i <= n; i++) {
    // int temp = len;
    // if(i%2 != 0){
    // for(int j = 1; j <= len; j++) {
    // cout <<  j;
    // len+=2;
    // }
    // cout << endl;
    // }
#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    char ch = 'G';
    int len = 1;
    int sp = n - 1;

    for (int i = 1; i <= n; i++)
    {
        // Leading spaces
        for (int j = 1; j <= sp; j++)
            cout << " ";

        
        cout << ch;

        
        if (i != 1)
        {
            for (int j = 1; j <= len; j++)
                cout << " ";

            cout << ch;
            len += 2;      
        }

        cout << endl;

        ch--;
        sp--;
    }

    return 0;
}


























