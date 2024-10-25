#include <iostream>

using namespace std;

int main()
{
    int  c, d;
    cin >>  c  >> d;
    int a = (c%d+d)%d;
    int b = (d%c+c)%c;
    int total = a * (a >= b) + b * (b > a);
    total = a+b-total;
	cout << total+1 << endl;
	return 0;
}