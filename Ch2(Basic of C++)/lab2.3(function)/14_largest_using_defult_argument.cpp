/*Write a program to find the largest of three numbers using the concept of function with default argument.*/
#include<iostream>
using namespace std;
int largest( int a= 10, int b= 2, int c=11)
{
   if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" is the largest number";
        }
        else
        {
            cout<<c<<" is the largest number";
        }
    }
    else
    {
        if (b>c)
        {
            cout<<b<<" is the largest number";
        }
        else
        {
            cout<<c<<" is the largest number";
        }
    }
}
int main()
{
    int a, b, c;
    largest();
    cout<<" with defult argument";
}