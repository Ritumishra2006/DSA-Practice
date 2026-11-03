#include <iostream>
using namespace std;
int main()
{
    // int n = 5;
    // char ch = 'A';
    // int st;
    // int sp = 2;
    // int sp = 3;
    // int st = 1;
    //

    // for(int i = 1; i <= n; i++) {
    // for(int j = 1; j <= n-i; j++){
    // cout << " ";
    // }
    // for(int j = 1; j <= i; j++) {
    // cout << "* ";
    // }
    //
    // cout << endl;
    // }

    // for(int i = 1; i <= n; i++) {
    // for(int j = i ; j <= n; j++) {
    // cout << "*" << " ";
    // }
    // cout << endl;
    // }

    // for(int i = 1; i <= n; i++) {
    // for(int j = 1; j <= n; j++) {
    // cout <<
    // }

    // for(int i = 1; i <= n; i++) {
    //
    // for(int j = 1; j <= i; j++) {
    // cout << dig  << " ";
    // dig++;
    //
    // }
    // cout << endl;
    //
    //  }

    //    for(int i = 1; i <= n; i++) {
    // for(int j = 1; j <= sp; j++) {
    // cout << " " ;
    // }
    // for(int j = 1; j <= st; j++) {
    // cout << "*";
    // }
    // cout << endl;
    // sp--;
    // st++;
    //    }

    // for(int i = 1; i <= n; i++) {
    // for(int j = 1; j <= sp; j++) {
    // cout << " ";
    // }
    // for(int j = 1; j <= st; j++) {
    // cout << "*";
    // }
    // cout << endl;
    // sp--;
    // st+=2;
    // }

    // for (int i = 1; i <= n; i++)
    // {

        // if (i % 2 == 0)
        // {
            // st = i;
        // }
        // else
        // {
            // st = i + 1;
        // }
        // for (int j = 1; j <= st; j++)
        // {
            // cout << "* ";
        // }
        // cout << endl;
    // }

// 
int n = 6;
int sp = n/2-1;
int st;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sp; j++) {
            cout << "  ";
        }
        if(i % 2 == 0) {
            st = i;
            sp--;

        } else {
            st = i+1;
        }
        for(int j = 1; j <= st ; j++){
            cout << "* ";
        }
        cout << endl;
        // if(i%2 == 0) {
            // sp-=1;
        // }
        
    }
    // int n = 5;
    // char ch = 'A';

    // for(int i = 1; i <= n; i++) {
        // char temp = ch;
        // for(int j = i; j <= n; j++) {
        // cout <<  temp;
            // cout << "A " ;
        // }
        // ch++;
    // }


    return 0;
}