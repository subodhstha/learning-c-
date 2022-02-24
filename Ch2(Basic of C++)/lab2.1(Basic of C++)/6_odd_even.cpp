//Write a program to identifies user inputted number whether it is odd or even.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any number\n";
    cin>>a;
    if (a%2 == 0)
    {
        cout<<a<<" is even number";
    }
    else
    {
        cout<<a<<" is odd number";
    }
    return 0;
}