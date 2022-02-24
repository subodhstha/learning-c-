/*Write a function factorial() which receives number n as its arguments and returns factorial of n 
(e.g., if n=5 then factorial of n =120)*/
#include<iostream>
using namespace std;
int factorial(int n)
{
    int f = 1 ;
    for (int i = 1; i <= n; i++)
    {
        f = f * i ;
    }
    return f;
}

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"The factorial of the number is "<<factorial(n);
}