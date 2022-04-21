// Write a program to compute addition of two complex numbers using operator overloading
#include<iostream>
using namespace std;
class add
{
    int real, imaginary;
    public:
    void get_data()
    {
        cout<<"Enter the value of real & imaginary number "<<endl;
        cin>>real>>imaginary;
    }
    add operator +(add d)
    {
        add d1;
        d1.real = real + d.real;
        d1.imaginary = imaginary + d.imaginary;
        return d1;
    }
    void display()
    {
        cout<<"The sum of the complex number is "<<real <<" + "<<imaginary <<" i"<<endl;
    }
};

int main()
{
    add d1, d2, d3;
    d1.get_data();
    d2.get_data();
    d3 = d1 + d2;
    d3.display();
}