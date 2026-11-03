#include <iostream>
using namespace std;
// int val(int a, int b)
// {
// if (a < b){
// return a;
// }
// else{
// return b;
// }
// }
// int main()
// {
// cout << "min= " << val(5,10) << endl;
// return 0;
// }

// int factN(int n)
// {
// int fact = 1;
// for (int i = 1; i <= n; i++)
// {
// fact *= i;
// }
// return fact;
// }
// int main()
// {
// cout << factN(5) << endl;
// cout << factN(10) << endl;
// return 0;
// }
//
// int factorial(int n)
// {
// int fact = 1;
// for(int i=1; i<=n; i++){
// fact *= i;
// }
// return fact;
// }
// int nCr(int n,int r){
// int fact_n = factorial(n);
// int fact_r = factorial(r);
// int fact_nmr = factorial(n-r);
//
// return  fact_n / (fact_r * fact_nmr);
//
// }
// int main()
// {
//    int n=8, r=2;
//    cout << nCr(n,r) << endl;
//    return 0;
// }
//
// int decToBinary (int decNum){
// int ans = 0, pow = 1;
//
// while(decNum > 0){
// int rem = decNum % 2;
// decNum /= 2;
//
// ans += (rem*pow);
// pow *= 10;
// }
// return ans;
// }
// int main(){
//  int decNum = 50;
//  for(int i=1; i<=10; i++){
//
//  cout << decToBinary(i) << endl;
//  }
//  return 0;
// }
//

// int binToDecimal(int binNum)
// {
    // int ans = 0, pow = 1;
// 
    // while (binNum > 0)
    // {
        // int rem = binNum % 10;
        // ans += rem * pow;
// 
        // binNum /= 10;
        // pow *= 2;
    // }
    // return ans;
// }
// int main()
// {
    // cout << binToDecimal(10100) << endl;
    // return 0;
// }
// 
int main(){
int a = 10 , b = 1;
{
      cout << (a >> b) << endl;
    //    ^,<<,>>,&,|.
}
return 0;
}
