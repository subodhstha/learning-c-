// Define a class Circle with radius and area as data members and  getdata, calArea and
//  Display as member fuctions. Use this class to calculate the area of  three circles.
#include<iostream>
using namespace std;
#define PI 3.14
class circle
{
private:
    int r;
public:
    void getdata()
    {
        cout<<"Enter the radius of the circle"<<endl;
        cin>>r;
    }
    float calArea()
    {
        return PI*r*r;
    }
    void display()
    {
        cout<<"The area of circle is ";
    }
};
int main()
{
    circle c1, c2, c3;
    cout<<"The area of three circles "<<endl<<endl;
    c1.getdata();
    c1.display();
    cout<<c1.calArea()<<endl;
    c2.getdata();
    c2.display();
    cout<<c2.calArea()<<endl;
    c3.getdata();
    c3.display();
    cout<<c3.calArea()<<endl;
    }
