// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a ;
    for (int i {1}; i < a+1; i++)
    {
        if (a>=i)
        {
            for (int w {1}; w < i; w++)
            {
                cout << i << " ";
            }
            a = a - i;
        }
        else
        {
            for (int q {1}; q < a; q++)
            {
                cout << i << " ";
            }
            break;
        }
    }
    return 0;
}