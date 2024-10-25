#include <iostream>

using namespace std;

int main()
{
    int  a;
    cin >>  a  ;
    if (a == 1) cout << "YES" << endl;
    else if ((a-4)%4==0) cout << "YES" << endl;
    else cout<<"NO"<<endl;
	return 0;
}