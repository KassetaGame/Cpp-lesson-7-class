#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a ;
    d = (45*a)+(5*(a-1))+(10*((a-1)/2));
    b = 9 + d/60;
    c = 0 + d%60;
    d = c %10;
    c = c/10;
	cout << b << " " << c << d << endl;
	return 0;
}