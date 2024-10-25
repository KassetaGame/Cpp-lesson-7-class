#include <iostream>
#include <cmath>
using namespace std;

int calculate_buses(int N, int M, int K) {
    // Если взрослых меньше 2, то поездка невозможна
    if (M < 2) {
        return 0;
    }
    
    // Если автобусы слишком маленькие для размещения детей с двумя взрослыми
    if (K <= 2) {
        return 0;
    }

    // Рассчитываем, сколько автобусов нужно для детей
    int buses_for_children = (N + (K - 3)) / (K - 2); // Аналог округления вверх

    // Проверяем, хватит ли взрослых для сопровождения всех автобусов с детьми
    if (buses_for_children > M / 2) {
        return 0;
    }

    // Оставшиеся люди после рассаживания детей
    int remaining_people = M + N - buses_for_children * K;

    // Если остались люди, которые не помещаются в автобусы, заказываем дополнительные автобусы
    int additional_buses = (remaining_people > 0) ? (remaining_people + (K - 1)) / K : 0;

    // Возвращаем общее количество автобусов
    return buses_for_children + additional_buses;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    int result = calculate_buses(N, M, K);
    cout << result << endl;

    return 0;
}