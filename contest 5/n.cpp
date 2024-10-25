// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;
    int main()
    {
        int a, b;
        cin >> a >> b;
        for(int i = a; i <= b; ++i){
            if(sqrt(i * 1.0) == int(sqrt(i)))
                cout << i << " ";
        }
        return 0;
    }

