// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a ;
    int c = 0;
    for (int i {1}; i < sqrt(a)+1; i++)
    {
        if (a%i==0)
        {
            c++;
            if (a/i != a/(a/i))
            {
                c++;
            }
        }
    }
    cout << c <<endl;
    return 0;
}