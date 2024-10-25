#include <iostream>

using namespace std;

bool canFit(int A, int B, int M, int N) {
    return (A<=M and B<=N)and(A!=0 and B != 0);
}

int main()
{
    int m, n, x, y;
    cin >>m >> n;
    cin >> x >> y;
    if (canFit(x-1, y, m, n)) cout << x-1 << " " << y << endl;
    if (canFit(x+1, y, m, n)) cout << x+1 << " " << y << endl;
    if (canFit(x, y+1, m, n)) cout << x << " " << y+1 << endl;
    if (canFit(x, y-1, m, n)) cout << x << " " << y-1 << endl;
    return 0;
}