/*Write a program to find the volume  of cube (l*l*l), rectangular box (l*b*h) and cylinder (PI * r*r*h) 
by using overloaded function area.*/
#include<iostream>
using namespace std;
int vol_cube(int l)
{
    int vol;
    vol = l*l*l;
    return vol;
}
int rect_box(int l, int b, int h)
{
    int vol;
    vol  = l*b*h;
    return vol;
}

int main()
{
    int l,b,h;
    cout<<"Enter the value of length, breadth & height ";
    cin>>l>>b>>h;
    cout<<"volume of cube is "<<vol_cube(l);
    cout<<endl;
    cout<<"volume of rectangular box is "<<rect_box(l,b,h);
    return 0;
}