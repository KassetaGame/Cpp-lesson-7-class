#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a = (n+1+((n+1)%2))/2;
    int b = (m+1+(m+1)%2)/2;
    cout << a *b << endl;
}