// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int n;
    int c = 2;
    while (c<30000+1)
    {
        if (n %c == 0)
        {
            cout << c << endl;
            break;
        }
        c ++;
    }
    return 0;
}