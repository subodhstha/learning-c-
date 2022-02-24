/*Write a function which receives a float and  an integer from main(), finds the product of these two and 
returns the product  which is printed through main().*/
#include<iostream>
using namespace std;
int sum(float a, int b);
int main()
{
    int n;
    float f;
    cout<<"Enter the float and integer value ";
    cin>>f>>n;
    cout<<"The product of input id "<<sum(f,n);
    return 0;
}
int sum(float a, int b)
{
    int p;
    p = a * b;
    return p;
}