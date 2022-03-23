//Write a program to ask the user for two numbers and print the sum, difference and product of those two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a, b, s, d, p;
    cout<<"Enter any two integer number \n";
    cin>>a>>b;
    s = a + b;
    d = a - b;
    p = a * b;
    cout<<"The sum, difference & product of "<<a<<" & "<<b<<" are\n";
    cout<<"sum = "<<s<<"\n""difference = "<<d<<"\n""product = "<<p;
    return 0;
}