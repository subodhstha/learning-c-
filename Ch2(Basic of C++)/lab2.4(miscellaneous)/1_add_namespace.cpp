/*Write a program with two name spaces ( A and B) each defines add function to add two numbers. 
Use add( ) function in each namespace in main method to add two numbers*/
#include<iostream>
using namespace std;
namespace A
{
    int add(int a, int b)
    {
        return a+b;
    }
}
namespace B
{
    float add(float a, int b)
    {
        return (float)(a+b);
    }
}
int main()
{
    int a,b,d;
    float c;
    cout<<"Enter any two integer number to add"<<endl;
    cin>>a>>b;
    cout<<"Enter any float and integer number to add"<<endl;
    cin>>c>>d;
    cout<<"The sum in namespace A is "<<A::add(a,b)<<endl;
    cout<<"The sum in namespace B is "<<B::add(c,d)<<endl;
}