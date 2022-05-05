// Extend the above program to display the area of circles. This requires addition of
// a new derived class circle that computes the area of a circle. Remember, for a 
// circle we need only one value, its radius, but the get_data(  ) function in the 
// base class requires two values to be passed. ( Hint: Make the second argument of 
// get_data( ) as default one with zero value.)

#include<iostream>
using namespace std;
#define PI 3.14
class shape
{
    public:
    double l, b, r;
    void get_data(double le, double br)
    {
        l = le;
        b = br;
    }
    void get_data(double ra)
    {
        r = ra;
    }
    virtual double display_area()=0;
};

class circle:public shape
{
    public:
    double display_area()
    {
        return (PI*(r*r));
    }
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
    double le,br,ra;
    cout<<"Enter the value of length, breadth & radius of circle"<<endl;
    cin>>le>>br>>ra;

    triangle t;
    rectrangle r;
    circle c;
    
    shape *p = &t;
    p->get_data(le,br);
    cout<<"The area of the triangle is "<<p->display_area()<<endl;

    p=&r;
    p->get_data(le,br);
    cout<<"The area of the rectangle is "<<p->display_area()<<endl;

    p=&c;
    p->get_data(ra);
    cout<<"The area of the circle is "<<p->display_area()<<endl;
}