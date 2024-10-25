#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
	cout <<  a%(24*60)/60 << " " << a%(24*60)%60  << endl;
	return 0;
}