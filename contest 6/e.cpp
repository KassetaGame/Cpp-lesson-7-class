
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b ;
    x = a;
    while (x < b+1)
    {
        if (x/1000%10 == x % 10 and x/100%10 == x /10%10)
        {
            cout << x << endl;
        }
        x++;
    }
    return 0;
}