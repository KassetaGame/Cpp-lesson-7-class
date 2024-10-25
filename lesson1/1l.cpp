#include <iostream>

using namespace std;

int main()
{
    int a, c, h, m, s, b;
    cin >> a;
    c = a%(24*60*60);
    h = c/3600;
    b = c%3600;
    m = b/60;
    s = b%60;
	cout <<  h << ":" << m/10 << m%10 << ":" << s/10 << s%10 << endl;
	return 0;
}