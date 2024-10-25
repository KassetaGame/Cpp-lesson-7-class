// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    a = 1;
    while (a<n+1)
    {
        int b;
        b = 1;
        while (b<a+1)
        {
            cout << b;
            b ++;
        }
        cout << endl;
        a ++;
    }
    return 0;
}