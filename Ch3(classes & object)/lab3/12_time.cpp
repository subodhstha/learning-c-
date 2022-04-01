// Create a class named Time with the required data members
//  and member functions to add two time entered by the user in hour and minutes format.

#include<iostream>
using namespace std;
class times
{
    int min, hr, m;
    public:
    void getData()
    {
        cout<<"Enter the time in hour and minutes"<<endl;
        cin>>hr>>min;
    }
    void add(times t1, times t2)
    {
        min = t1.min + t2.min;
        m = min / 60;
        min = min  % 60;
        hr = t1.hr + t2.hr + m;
    }
    void display()
    {
        cout<<"The total time is "<<hr<<" hour "<<min<<" minute"<<endl;
    }
};
int main()
{
    times t1, t2, t3;
    t1.getData();
    t2.getData();
    t3.add(t1, t2);
    t3.display();
}