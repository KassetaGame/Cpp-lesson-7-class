// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int n;
    int c = 0;
    n = 0;
    while (c<10)
    {
        int a;
        cin >> a;
        n = n + a;
        c ++;
    }
    cout << n << endl;
    return 0;
}