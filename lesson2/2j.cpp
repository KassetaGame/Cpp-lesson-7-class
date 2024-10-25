#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N, M, K;
    cin >> N >> M >> K;

    long long rolls = (M+K/N-1)/(K/N);

    // Выводим результат
    cout << rolls << endl;

    return 0;
}
