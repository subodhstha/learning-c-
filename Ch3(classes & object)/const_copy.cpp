#include<iostream>
using namespace std;
class rect
{
private:
    int l,b;
public:
    rect(int x, int y)
        {
            l= x;
            b = y;
        }
    rect(rect & r)
    {
        l=r.l;
        b=r.b;
    }
    int area()
    {
        return l*b;
    }

};
int main()
{
    int a, b;
    cout<<"Enter the value of length and breadth"<<endl;
    cin>>a>>b;
    cout<<"The area of length "<<a<<" and breadth "<<b<<" are"<<endl;
    rect r(a,b);
    cout<<r.area();
}