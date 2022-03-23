//Write a program to find the simple interest using inline function.
#include<iostream>
using namespace std;
inline float si(int p, int t, int r)
{
    float si;
    si = (float)(p*t*r)/100;
    return si;
}

int main()
{
    int p,t,r;
    cout<<"Enter the value of principle, time & rate ";
    cin>>p>>t>>r;
    cout<<"The simple interest of given data is "<<si(p,t,r)<<endl;
    return 0;
}