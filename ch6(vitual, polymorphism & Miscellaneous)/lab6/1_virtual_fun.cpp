// Create a  base class called shape. Use this class to store two double type 
// values that could be used to compute the area of figures. Derive two specific classes 
// called triangle and rectangle from the base shape. Add to the base class, a member 
// function get_data( ) to initialize base class data members and another member function 
// display_area( ) to compute and display the area of figure. Make display_area( ) as a 
// virtual function and redefine this function in the derived classes to suit their requirements.

#include<iostream>
using namespace std;

class shape
{
    public:
    double l, b;
    void get_data(double le, double br)
    {
        l = le;
        b = br;
    }
    virtual double display_area()=0;
};

class triangle:public shape
{
    public:
    double display_area()
    {
        return ((l*b)/2);
    }
};

class rectrangle:public shape
{
    public:
    double display_area()
    {
        return (l*b);
    }
};

int main()
{
    double le,br;
    cout<<"Enter the value of length & breadth "<<endl;
    cin>>le>>br;

    triangle t;
    rectrangle r;

    shape *p = &t;
    p->get_data(le,br);
    cout<<"The area of the triangle is "<<p->display_area()<<endl;

    p=&r;
    p->get_data(le,br);
    cout<<"The area of the rectangle is "<<p->display_area()<<endl;
}
