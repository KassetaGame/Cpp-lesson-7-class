#include <iostream>

using namespace std;

int main()
{
    int a, b, c , z,x ,y;
    cin >> x  >> y >> z ;
    a = max(x,y);
    a = max(a, z);
    b = min(x, y);
    b = min(b, z);
    c = x+y+z-a-b;
    if (a+b<=c or c+b<=a or a+c<=b)
        cout << "impossible" << endl;
    else if (a*a == (b*b + c*c))
        cout << "rectangular" <<endl;
    else if (a*a > (b*b + c*c))
        cout << "obtuse" << endl;
    else if (a*a < (b*b + c*c))
        cout << "acute" <<endl;

    return 0;
}