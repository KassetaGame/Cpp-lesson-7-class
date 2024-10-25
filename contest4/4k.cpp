#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b ;
    int r = 0;
    r = a-1-b-1;
    int t = b - 2-1;
    int q = max(t, r);
    if (a/2 < b) r = b-(a/2)-1;
    else  r = (a/2)-b;
    cout << max(q, r ) <<endl;
    return 0;
}