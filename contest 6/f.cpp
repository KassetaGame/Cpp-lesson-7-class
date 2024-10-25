// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4, s ,b;
    cin >> s>>b;
    while (s<b)
    {
        n1 = s/1000%10;
        n2 = s/100%10;
        n3 = s/10%10;
        n4 = s%10;
       if ((n1 == n2 and n2==n3 and n3 != n4) or (n1 == n2 and n2 == n4 and n3 != n4) or (n1 == n3 and n3 == n4 and  n4!=n2) or (n2 == n3 and n3 == n4 and n4 != n1))
       {
        cout << s << endl;
       }
       s++;
    }
    return 0;
}