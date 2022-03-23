// Write a program to swap two number by using call by reference
#include<iostream>
using namespace std;
int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a, b;
}

int main()
{
    int x,y;
    cout<<"Enter the value of two number ";
    cin>>x>>y;
    swap(x,y);
    cout<<"value after swap is "<<x<<" & "<<y;
    return 0;
}