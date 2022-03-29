// Write a object-oriented program to find the area and volume of  two different room.

#include<iostream>
using namespace std;
class room{
    int l, b, h;
    public:
    room()
    {
        cout<<"Enter the length, breath & height"<<endl;
    }
    void getData()
    {
        cin>>l>>b>>h;
    }
    void area()
    {
        cout<<2*((l*b)+(b*h)+(h*l))<<endl;
    }
    void volume()
    {
        cout<<l*b*h;
    }
    void display()
    {
        cout<<"The area of the room is ";
        area();
        cout<<"The volume of the room is ";
        volume();
    }
};
int main()
{
    room a;
    a.getData();
    a.display();
}