// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    a = 1;
    while (a*a<n+1)
    {
        cout << a*a <<endl;
        a ++;
    }
    return 0;
}