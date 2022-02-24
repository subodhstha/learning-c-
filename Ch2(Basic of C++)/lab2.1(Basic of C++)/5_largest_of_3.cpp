//Write a program that identifies largest of three input numbers.
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the three integer to find largest among them\n";
    cin>>a>>b>>c;
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