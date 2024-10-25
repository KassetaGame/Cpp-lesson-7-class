#include <iostream>

using namespace std;

int main()
{
    long long M, X, Y, W, H, left, right, bottom, top;
    cin >> M >> X >> Y >> W >> H;
    left = X / M;
    right = (X + W - 1) / M;
    bottom = Y / M;
    top = (Y + H - 1) / M;
    cout << (right - left + 1) * (top - bottom + 1) << endl;
}