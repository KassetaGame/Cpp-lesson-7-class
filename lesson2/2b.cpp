#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    d = a*100+b;
	cout << (d*c/100) << " " << d*c%100 << endl;
	return 0;
}