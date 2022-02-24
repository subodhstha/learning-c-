//Write a program that reads the two numbers and one arithmetic operator and perform the respective operation. (use switch case statement)
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cout<<"Enter any two number\n";
    cin>>a>>b;
    cout<<"Enter any +, -, *\n";
    cin>>c;
    switch(c)
    {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b;
        break;
    case '-':
        cout<<a<<" - "<<b<<" = "<<a-b;
        break;
    case '*':
        cout<<a<<" * "<<b<<" = "<<a*b;
        break;
    default:
        cout<<"You have enter wrong information";
        break;
    }
}