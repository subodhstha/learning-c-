// Write a C++ program to illustrate the overloading of prefix decrement operator.
#include<iostream>
using namespace std;
class counter
{
    int count;
    public:
    counter()
    {
        count = 0;
    }
    void get_count()
    {
        cout<<count<<endl;
    }
    void operator --()
    {
        --count;
    }
};
int main()
{
    counter c1, c2;
    cout<<"Value before increment"<<endl;
    cout<<"c1 count = ";
    c1.get_count();
    cout<<"c2 count =";
    c2.get_count();
    --c1;
    --c2;
    --c2;
    cout<<"Value after increment "<<endl;
    cout<<"c1 count = ";
    c1.get_count();
    cout<<"c2 count = ";
    c2.get_count();
}