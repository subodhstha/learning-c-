#include<iostream>
using namespace std;

template<class T>
T fmax(T a, T b)
{
    T max;
    if (a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}

int main()
{
    int x=50, y= 73;
    cout<<"Greatest number is "<<fmax(x,y);
}