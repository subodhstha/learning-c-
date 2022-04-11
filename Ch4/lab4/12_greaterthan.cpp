// Write a C++ program to illustrate the overloading of relational operator >.
#include<iostream>
using namespace std;
class greater_than
{
    int data;
    public:
    greater_than()
    {
        int d;
        data = d;
    }
    void get_data()
    {
        cout<<"Enter any number"<<endl;
        cin>>data;
        cout<<data;
    }
    int operator >(greater_than d)
    {
        if (data>d.data)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    greater_than d1, d2;
    d1.get_data();
    
}