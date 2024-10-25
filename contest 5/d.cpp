// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    b = 1;
    c = 1;
    for(int i {0}; i < a; i++)
    {
        b=b*10;
    }
    b=b-1;
    for(int i {0}; i < a-1; i++)
    {
        c=c*10;
    }
    c = c-1;
    while (b>c)
    {
        cout << b << " ";
        b = b-2;
    }
    return 0;
}