#include<iostream>
using namespace std;
class mcm
{
    int cm, m;
    public:
    mcm()
    {
        cout<<"Enter the data in m and cm"<<endl;
        cin>>m>>cm;
    }
    int get_m()
    {
        return m;
    }
    int get_cm()
    {
        return cm;
    }
};

class feet
{
    float ft, in;
    public:
    feet(mcm d)
    {
        ft = d.get_m() * 3.3;
        in = d.get_cm() * 0.4;
    }
    void display()
    {
        cout<<"ft = "<<ft<<"in="<<in;
    }
};
int main()
{
    mcm d;
    feet f=d;
    f.display();
}