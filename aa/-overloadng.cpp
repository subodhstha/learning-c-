#include<iostream>
using namespace std;
class complex
{
    private:
    int real, imaginary, diff;
    public:
    void getData()
    {
        cout<<"Enter the complex number"<<endl;
        cin>>real>>imaginary;
    }
    complex operator -(complex a)
    {
        complex a2;
        a2.real = real - a.real;
        a2.imaginary= imaginary - a.imaginary;
        return a2;
    }
    void display()
    {
        cout<<"difference is "<<endl;
        cout<<real <<" + "<<imaginary<<"i";
    }
};
int main()
{
    complex a1, a2, a3;
    a1.getData();
    a2.getData();
    a3 = a1-a2;
    a3.display();
    return 0;
}