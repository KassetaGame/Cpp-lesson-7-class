// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int m1, m2, x;
    m1 = -2147483647;
    m2 = -2147483648;
    for (cin >> x; x!=0; cin >> x)
    {
        if (x >= m1 and x >=m2)
        {
            m2 = m1;
            m1 = x;
            
        }
        else if (x >=m2 and x < m1)
        {
            m2 = x;
        }
        
    }
    cout << m2 << endl;
    return 0;
}