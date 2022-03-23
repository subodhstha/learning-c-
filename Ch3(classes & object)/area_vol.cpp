#include<iostream>
using namespace std;

class cube
{
private:
    int l, b, h;
public:
    void data()
    {
        cout<<"Enter the value"<<endl;
        cin>>l>>b>>h;
    }
    int area()
    {
        return(2*(l*b+b*h+l*h));
    }
};
int main()
{
    cube a;
    a.data();
    cout<<a.area();
}
