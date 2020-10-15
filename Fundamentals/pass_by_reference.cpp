#include <iostream>
using namespace std;

void passbyvalue(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}

void passbyreference(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int a = 5, b = 6;
    cout << "Before swapping the value of a = " << a << " and b = " << b << "\n";

    passbyreference(a, b);

    cout << "Before swapping the value of a = " << a << " and b = " << b << "\n";

    return 0;
}