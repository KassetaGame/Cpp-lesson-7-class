#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    int q, t,f;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    e = a*100+b;
    q= 100*c+d;
    f = (q-e)/100;
    t = (q-e)%100;
	cout <<  f << " " << t << endl;
	return 0;
}