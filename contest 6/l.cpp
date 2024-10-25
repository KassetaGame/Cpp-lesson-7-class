// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int steps(unsigned long long v) {
    int k = 0;
    unsigned long long t = 1;
    while (t < v) {
        k++;
        t *= 2;
    }
    return k;
}

int main()
{
    unsigned long long h, w, lh, lw;
    unsigned long long answ = 0;
    cin >> lh >> lw; // лист
    cin >> h >> w; // конверт

    int a1 = steps((lh + h - 1) / h); //округляем вверх
    int b1 = steps((lw + w - 1) / w);
    int a2 = steps((lh + w - 1) / w);
    int b2 = steps((lw + h - 1) / h);

    cout << min(a1 + b1, a2 + b2);

    return 0;
}