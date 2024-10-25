#include <iostream>

using namespace std;


long long mac(long long a, long long b) {
    long long p = a-b;
    return (p*((2*p+1)%2)+a+b)/2;
}

int main()
{
    long long x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    long long q = (x/a)*(y/b)*(z/c);
    long long w = (x/a)*(y/c)*(z/b);
    long long e = (x/b)*(y/a)*(z/c);
    long long r = (x/b)*(y/c)*(z/a);
    long long t = (x/c)*(y/b)*(z/a);
    long long u = (x/c)*(y/a)*(z/b);
    long long total = mac(q,w);
    total = mac(total, e);
    total = mac(total, t);
    total = mac(total, r);
    total = mac(total, u);
    cout <<total << endl;

    return 0;
}