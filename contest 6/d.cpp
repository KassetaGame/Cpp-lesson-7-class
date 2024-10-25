
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int a, b,c ,d, x, e, q;
    cin >> a >> b >> c >> d >>e;
    x = 0;
    q = 0;
    while (x < 1001)
    {
        if (a*x*x*x+b*x*x+c*x+d == 0 and x-e!=0)
        {
            q++;
        }
        x++;
    }
    cout << q << endl;
    return 0;
}
