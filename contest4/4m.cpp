#include <iostream>

using namespace std;


int main()
{
    int x, y;
    cin >> x >> y;
    int s = x+y;
    int d = x-y;
    int d2 = d/2;
    int s2=s/2;
    if (s > 0 && d ==0) cout << 0 <<endl;
    else if (s>0 && d >0) {cout << 1 << endl;
        cout << s2 << " " << s2 << " " << "H" << endl;}
    else if (s>0 && d <0) {cout << 1 << endl;
        cout << s2 << " " << s2 << " " << "V" << endl;}
    else if (s<=0 && d >0) {cout << 2 << endl;
        cout << d2 << " " << d2 << " " << "H" << endl;
        cout << d << " " << 0 << " " << "V" << endl;}
    else if (s<=0 && d <0) {cout << 2 << endl;
        cout << -1*d2 << " " << -1*d2 << " " << "V" << endl;
        cout << 0 << " " << -1*d << " " << "V" << endl;}
    else if (s<=0 && d ==0) {cout << 3 << endl;
            cout << 1 << " " << 1 << " " << "H" << endl;
            cout << 2 << " " << 0 << " " << "V" << endl;
            cout << x+1 << " " << y-1 << " " << "H" << endl;}
    return 0;
}