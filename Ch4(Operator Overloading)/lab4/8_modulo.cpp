// Write a C++ program to illustrate modulo division of objects using operator overloading.
#include<iostream>
using namespace std;
class modulo
{
    int a;
    public:
    void get_data()
    {
        cout<<"Enter the data"<<endl;
        cin>>a;
    }
    modulo operator %(modulo d)
    {
        modulo d1;
        d1.a = a % d.a;
        return d1;
    }
    void display ()
    {
        cout<<"The modulo division of number is "<<a<<endl;
    }
};

int main()
{
    modulo d1, d2, d3;
    d1.get_data();
    d2.get_data();
    d3 = d1 % d2;
    d3.display();
}
