#include <iostream>

using namespace std;

int main()
{
    int h, a, b, c ,d;
    cin >>  a  ;
    h = a/1000+1;
    b = a/100%10+1;
    c = a/10%10+1;
    d = a%10+1;
	cout << (h%d+d)%d+(c%b+b)%b+1 << endl;
	return 0;
}