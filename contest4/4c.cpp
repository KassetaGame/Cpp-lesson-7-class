#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a ;
    if (a/10!=1 and a%10==1)
        cout << a << " korova" << endl;
    else if (a/10!=1 and (a%10==2 or a%10==3 or a%10==4))
        cout << a << " korovy" << endl;
    else
        cout << a << " korov" << endl;
    return 0;
}