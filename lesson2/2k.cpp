#include <iostream>
using namespace std;

int main() {
    long long K, P, S;
    cin >> K >> P >> S;
    long long c = K * (100 + P);
    cout << (S*100)/c << endl;

    return 0;
}