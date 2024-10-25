
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int n, sn, x;
    cin >> n;
    sn = 0;
    for (int i = 1; i < n+1; i++)
    {
        sn +=i;
    }
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        sn -= x;
    }
    cout << sn << endl;
    return 0;
}