/*Write a function calculateArea() which receives length and breadth of a rectangle
as its arguments and returns area of the rectangle.*/
#include<iostream>
using namespace std;
int calculateArea(int a, int b)
{
    return(a*b);
}
int main()
{
    int a, b;
    cout<<"Enter the value of length and breadth ";
    cin>>a>>b;
    cout<<"The area of rectangle is "<<calculateArea(a,b);
}