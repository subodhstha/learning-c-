//Write a program to find the sum of digits of a number entered by the user.
#include<iostream>
using namespace std;
int main()
{
    int n, s=0, r;
    cout<<"Enter the number\n";
    cin>>n;
    while (n != 0)
    {
        r = n%10;
        n = n/10;
        s = s + r;
    }
    cout<<"The sum of digits is "<<s;
}