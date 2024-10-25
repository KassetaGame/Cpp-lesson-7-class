#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
	cout <<  (a-(b%a))%a << endl;
	return 0;
}