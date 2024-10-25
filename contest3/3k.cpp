#include <iostream>

using namespace std;
long long mod(int n){
   return n*((2*n+1)%2); 
}
int main()
{
    long long k, m, n;
    cin >> k >> m >> n;
    long long x = (2*n+k-1)/k*m;
    long long y = 2*m;
    long long q = x-y;
    long long max = (q*((2*q+1)%2)+x+y)/2;
    cout <<max<< endl;

    return 0;
}