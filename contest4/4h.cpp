#include <iostream>
using namespace std;

bool canFit(int A, int B, int C, int D, int E) {
    // Проверяем все возможные ориентации кирпича
    return ((A <= D && B <= E) || (A <= E && B <= D) || 
            (A <= D && C <= E) || (A <= E && C <= D) || 
            (B <= D && C <= E) || (B <= E && C <= D));
}

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    if (canFit(A, B, C, D, E)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
