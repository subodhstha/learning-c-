// Write a C++ program to illustrate normal division of objects using operator overloading.
#include<iostream>
using namespace std;
class division
{
    float a;
    public:
    void get_data()
    {
        cout<<"Enter the data "<<endl;
        cin>>a;
    }
    division operator /(division d)
    {
        division d1;
        d1.a = a / d.a;
        return d1;
    }
    void display ()
    {
        cout<<"The division of two number is "<<a<<endl;
    }
};

int main()
{
    division d1, d2, d3;
    d1.get_data();
    d2.get_data();
    d3 = d1 / d2;
    d3.display();
}