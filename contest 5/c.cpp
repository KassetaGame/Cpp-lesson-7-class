// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        while (b>=a)
        {
            cout << a << " ";
            a ++;
        }
    }
    else
    {
        while (a>=b)
        {
            cout << a << " ";
            a --;
        }
    }
    return 0;
}