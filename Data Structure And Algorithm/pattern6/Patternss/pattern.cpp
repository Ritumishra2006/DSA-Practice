#include <iostream>
using namespace std;
int main()
{
    // int n = 5;
    // char ch = 'E';
    // for(int i = 0; i < n; i++) {
    // for(int j = i; j < n; j++) {
    // cout << char('E'-i) << " ";
    // }
    // cout << endl;
    // ch--;
    // }
    int n = 10;

    int st;
    for (int i = 1; i <= n; i++)
    {

        if (i == 1)
        {
            cout << " ";
            for (int j = 1; j <= n / 2 - 1; j++)
            {

                cout << "*";
            }
        }
       else if (i == n / 2 + 1)
        {
            for (int j = 1; j <= n / 2 + 1; j++)

                cout << "*";
        }

        else
        {

            cout << "*";
            for (int j = 1; j <= n / 2 - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
