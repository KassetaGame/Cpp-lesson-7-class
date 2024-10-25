#include <iostream>

using namespace std;

int main()
{
    int a, c, h, m, s, b;
    cin >> a >> b;

	cout << (109+(a*b)%109)%109 << endl;
	return 0;
}