#include <iostream>
using namespace std;

int f(long long n, long long k)
{
        // Ряды
    long long block = (k-1)/(n+n+1); //Кол-во блоков до блока в котором находится место
    long long k_in_row = (k-1)%(n+n+1);//Номер места в этом блоке
    long long plus_row = k_in_row/n-(k_in_row/(2*n));//Какой ряд в блоке
    long long row = 2*block+plus_row+1; //Итого ряд
    // Сиденье
    long long seat = k_in_row-n*plus_row+1;// Кол-во сидений

    cout << row << " " << seat << endl;

    return 0;
}


int main() {
   long long n, k;
   cin >> n >> k;
   f(n, k);

}