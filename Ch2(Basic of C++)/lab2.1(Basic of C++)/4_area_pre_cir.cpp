//Write a program to calculate area and perimeter of a circle .[ Hint area= PI*r*r and perimeter= 2*PI*r].
#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
    float r, a, pre;
    cout<<"Enter the radius of the circle ";
    cin>>r;
    a = PI*r*r;
    pre = 2*PI*r;
    cout<<"The area and perimeter of a circle having radius "<<r<<" are\narea = "<<a<<"\n""perimeter = "<<pre;
    return 0;
}