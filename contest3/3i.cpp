#include <iostream>

using namespace std;

int main()
{
    int  a,  e;
    char  total;
    cin >>  a  >> e;
    if (e == 1 and a == 1) cout << "YES" << endl;
    else if (e == 1 and a != 1)cout << "NO" << endl;
    else if (e != 1 and a == 1)cout << "NO" <<endl;
    else cout<<"YES"<<endl;
	return 0;
}