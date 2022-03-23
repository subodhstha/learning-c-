//Write a program to check whether a number entered by the user is Armstrong number [e.g., 153 =1^3+5^3+3^3] or not.
#include<iostream>
using namespace std;
int main()
{
    int n, r, b, t=0;
    cout<<"Enter any number ";
    cin>>n;
    b = n;
    while (n != 0)
    {
        r = n % 10;
        t= t + r*r*r;
        n = n/10;
    }
    if (t == b)
    {
        cout<<"The given number is amrstrong number";
    }
    else
    {
        cout<<"The given number is not amrstrong number";
    }
    
}