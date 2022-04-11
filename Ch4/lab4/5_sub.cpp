// Write a program to compute subtraction of two complex numbers using operator overloading.
#include<iostream>
using namespace std;
class sub
{
    int real, imaginary;
    public:
    void get_data()
    {
        cout<<"Enter the real number & imaginary number"<<endl;
        cin>>real>>imaginary;
    }
    sub operator -(sub d)
    {
        sub d1;
        d1.real = real - d.real;
        d1.imaginary = imaginary - d.imaginary;
        return d1;
    }
    void display()
    {
        cout<<"The difference of two complex number is ";
        cout<<real<<" + "<<imaginary<<" i";
    }
};

int main ()
{
    sub d1, d2, d3;
    d1.get_data();
    d2.get_data();
    d3 = d1 - d2;
    d3.display();
}