//Write a program to take a number from the user and then count the number of digits in that number.
#include<iostream>
using namespace std;
int main ()
{
    int n, c=0;
    cout<<"Enter any number\n";
    cin>>n;
    while (n!=0)
    {
        n = n/10;
        c++;
    }
    cout<<"The number of digits is "<<c;
    return 0;
}