    // Online C++ compiler to run C++ program online
    #include <iostream>

    using namespace std;

    int main() {
        int a, b;
        cin >> a >> b;
        while (b+1>a)
        {
            if (a %2 == 0)
            {
               cout << a << " ";
            }
            a++;
        }
        return 0;
    }