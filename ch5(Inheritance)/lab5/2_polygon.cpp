// Create class polygon based on this class, derive two base classes 
// Rectangle and Triangle to calculate area with necessary data members 
// and member function. (note: area of rectangle=L*b and area of triangle= (l*b/2)).

#include<iostream>
using namespace std;

class polygon
{
    public:
    int l,b;
    void get_data()
    {
        cout<<"Enter the length and breadth ";
        cin>>l>>b;
    }
};

class rectangle:public polygon
{
    public:
    void area()
    {
        get_data();
        cout<<"The area of rectangle is "<<l * b<<endl;
    }
};

class triangle: public rectangle
{
    public:
    void areas()
    {
        area();
        cout<<"The area of triangle is "<<(l*b)/2<<endl;
    }
};

int main()
{
    triangle t;
    t.areas();
}