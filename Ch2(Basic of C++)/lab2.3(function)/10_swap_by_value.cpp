// Write a program to swap two number by using call by value.
#include<iostream>
using namespace std;
int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a,b;
}
int main()
{
    int x,y;
    cout<<"Enter the value of a and b to swap ";
    cin >>x>>y;
    swap(x,y);
    cout<<"value after the swap is "<<x <<" & "<<y;
}