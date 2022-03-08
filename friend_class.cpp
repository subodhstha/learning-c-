#include<iostream>
using namespace std;
class First{
    int a;
    friend class Second; //second is declaration in private mode of first class
    public:
    void get_num(int x)
    {
        a = x;
    }
}; // first class terminate
class Second{
    int b;
    public:
    void get_num(int y)
    {
        b = y;      
    }
        void get_sum( First obj1) // second class member defination
    {
        int sum;
        sum = obj1.a + b; // accessing first class member using first class object f1
        cout<<"Total: "<<sum;
    }
};// second class terminate
int main() // main function start here
{
    int a,b;
    First obj2;            // first class object declare
    Second s;        // second class object declare
    cout<<"Enter two number: ";
    cin>>a>>b;
    obj2.get_num(a);          // first class function call
    s.get_num(b);         // second class function call
    s.get_sum(obj2);        // friend function call
    return 0;
}