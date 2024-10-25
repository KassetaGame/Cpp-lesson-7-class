#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int q  = d*3600+e*60+f;
    int w = a*3600+b*60+c;
    int z = q-w;
	cout << z << endl;
	return 0;
}