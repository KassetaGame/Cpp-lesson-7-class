#include <iostream>

using namespace std;

int main()
{
    int  n, m ,k;
    cin >>  n >> m >>k ;
    if (k < n * m and ((k % n == 0) or (k % m == 0))) cout << "YES" << endl;
    else cout<<"NO"<<endl;
	return 0;
}