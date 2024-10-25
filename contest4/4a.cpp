#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a==0 and b ==0)
        cout << "INF" << endl;
    else if (a==0)
        cout << "NO" << endl;
    else if ((0-b)%a==0)
        cout << (0-b)/a << endl;
    else
        cout << "NO" << endl;
    return 0;
}