//• Write a program to reverse the number entered by the user.
#include<iostream>
using namespace std;
int main()
{
    int n,r,t=0;
    cout<<"Enter any number ";
    cin>>n;
    while (n != 0)
    {
        r = n % 10;
        t = t*10 + r;
        n = n/10;
    }
    cout<<"The reverse is "<<t;
    return 0;
}