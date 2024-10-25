#include <iostream>

using namespace std;

int main()
{
    int n,a,x,b,y,r,rd,t,td;
    cin >> n >>a >>x >>b>>y;
    int xo=2*x+1;
    int yo = 2*y+1;
    int k = n/(max(xo,yo));
    if (xo>yo) {
        r = a;
        rd = x;
        t = b;
        td = y;
    } 
    else {
        r = b;
        rd = y;
        t = a;
        td = x;
    };
    
    int pos = 0;
    int light = 0;
    while (n > pos) {
        if (r > 0) {
            pos += rd + 1;
            light = rd;
            r--;
        } else if (t > 0) {
            pos += td + 1;
            light = td;
            t--;
        } else {
            cout << -1;
            return 0;
        }

        if (pos > n) {
            pos = n;
        }

        pos += light; 
    }

    pos = 0;
    light = 0;

    if (xo>yo) {
        r = a;
        rd = x;
        t = b;
        td = y;
    } 
    else {
        r = b;
        rd = y;
        t = a;
        td = x;
    };

    while (n > pos) {
        if (r > 0) {
            pos += rd + 1;
            light = rd;
            r--;
        } else if (t > 0) {
            pos += td + 1;
            light = td;
            t--;
        } else {
            cout << -1;
            break;
        }

        if (pos > n) {
            pos = n;
        }

        cout << pos << " " << light << endl;
        pos += light; 
    }

    return 0;
}