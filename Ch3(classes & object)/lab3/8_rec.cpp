// Write a class rectangle with data members length and breadth and member functions readdata( ) , 
// area( ), perimeter( ) and display( ). Use this class to calculate the area of  three rectangles 
// of different dimension.

#include<iostream>
using namespace std;
class rectangle
{
    int l, b;
    public:
    void readdata()
    {
        cout<<"Enter the length, breadth of the rectangle"<<endl;
        cin>>l>>b;
        cout<<endl;
    }
    void area()
    {
        cout<<l*b<<endl;
    }
    void perimeter()
    {
        cout<<2*(l*b)<<endl;
    }
    void display()
    {
        cout<<"The area of the rectange is ";
        area();
        cout<<"The perimeter of the rectangle is ";
        perimeter();
    }
};
int main()
{
    rectangle a1;
    a1.readdata();
    a1.display();
}