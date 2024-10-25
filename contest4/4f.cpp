#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cost_one = 15;  // стоимость 1 поездки
    int cost_ten = 125; // стоимость 10 поездок
    int cost_sixty = 440; // стоимость 60 поездок

    // Сначала используем билеты на 60 поездок
    int tickets_sixty = n / 60;
    n %= 60;  // Оставшиеся поездки

    // Далее используем билеты на 10 поездок
    int tickets_ten = n / 10;
    n %= 10;  // Оставшиеся поездки

    // Оставшиеся поездки покрываем билетами на 1 поездку
    int tickets_one = n;

    // Проверяем возможность замены 10 поездок или 1 поездки на более выгодные варианты
    // Рассматриваем вариант покупки одного билета на 10 поездок вместо 1 поездок
    if (tickets_one * cost_one > cost_ten) {
        tickets_ten++;
        tickets_one = 0;
    }

    // Рассматриваем вариант покупки одного билета на 60 поездок вместо нескольких билетов на 10 или 1 поездки
    if (tickets_ten * cost_ten + tickets_one * cost_one > cost_sixty) {
        tickets_sixty++;
        tickets_ten = 0;
        tickets_one = 0;
    }

    cout << tickets_one << " " << tickets_ten << " " << tickets_sixty << endl;

    return 0;
}
