#include <iostream>

using namespace std;

int main()
{
    int  a, b;
    cin >>  a  >> b;
    int f = ( a / b * a + b / a * b ) / ( a / b + b / a );
	cout << f << endl;
	return 0;
}