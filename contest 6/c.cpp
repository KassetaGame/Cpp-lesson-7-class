// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int a, b,c ,d, x;
    cin >> a >> b >> c >> d;
    x = 0;
    while (x < 1001)
    {
        if (a*x*x*x+b*x*x+c*x+d == 0)
        {
            cout << x << " ";
        }
        x++;
    }
    return 0;
}