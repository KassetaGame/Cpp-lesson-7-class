#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b )a = a;
    else a = b;
    if(a>=c )a = a;
    else a = c;
    cout << a << endl;
}