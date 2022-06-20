#include <iostream>

using namespace std;

int sum(int a, int b = 10, int c = 20);

int main()
{

    cout << sum(11) << endl;

    cout << sum(11, 12) << endl;

    cout << sum(11, 12, 13) << endl;

    return 0;
}

int sum(int a, int b, int c)
{

    int z;

    z = a + b + c;

    return z;
}