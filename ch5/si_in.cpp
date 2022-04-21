#include<iostream>
using namespace std;
class a
{
private:
    int x, y;
public:
    void read()
    {
        cout<<"Enter the value of x, y"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"The value are"<<endl;
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};
class b:a
{
    int z;
    public:
    void get()
    {
        read();
        cout<<"Enter the value of z"<<endl;
        cin>>z;
    }
    void showdata()
    {
        display();
        cout<<"z = "<<z<<endl;
    }
};
int main()
{
    b c1;
    c1.get();
    c1.showdata();
}