/*Write a program to display the value and address of a  variable using pointer variable.*/
#include<iostream>
using namespace std;
int main()
{
    int a, *p;
    p = &a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    cout<<"The address of the a or "<<*p<<" is "<<p<<endl;
    cout<<"The value of the a is "<<*p<<endl;
    return 0;
}