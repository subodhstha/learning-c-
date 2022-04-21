// Write a C++ program to multiply two objects.
#include<iostream>
using namespace std;
class multiply
{
    int n;
    public:
    void get_data()
    {
        cout<<"Enter the value"<<endl;
        cin>>n;
    }
    multiply operator *(multiply d)
    {
        multiply d1;
        d1.n= n * d.n;
        return d1;
    }
    void display ()
    {
        cout<<"The multiplication of two number is "<<n<<endl;
    }
};

int main()
{
    multiply d1, d2, d3;
    d1.get_data();
    d2.get_data();
    d3 = d1 * d2;
    d3.display();
}