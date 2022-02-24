#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    cout<<"a = "<<a<<"\n""b = "<<b<<"\n";
    temp = a;
    a = b;
    b = temp;
    cout<<"After swap \na = "<<a<<"\n""b = "<<b;
    return 0;
}