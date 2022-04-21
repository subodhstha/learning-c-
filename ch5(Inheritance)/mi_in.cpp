#include<iostream>
using namespace std;
class teams
{
    int tid;
    string subject;
    public:
    void get()
    {
        cout<<"Enter the team id "<<endl;
        cin>>tid;
        cout<<"Enter the subject"<<endl;
        cin>>subject;
    }
    void display()
    {
        cout<<"Team id = "<<tid<<endl;
        cout<<"Subject = "<<subject<<endl;
    }
};
class staff
{
    int sid;
    string level;
    public:
    void gets()
    {
        cout<<"Enter the staff id"<<endl;
        cin>>sid;
        cout<<"Enter the level"<<endl;
        cin>>level;
    }
    void displays()
    {
        cout<<"staff id = "<<sid<<endl;
        cout<<"level = "<<level<<endl;
    }
};
class coordinator:teams,staff
{
    string program;
    public:
    void getdata()
    {
        get();
        gets();
        cout<<"Enter the program"<<endl;
        cin>>program;
    }
    void displaydata()
    {
        display();
        displays();
        cout<<"program = "<<program<<endl;
    }
};

int main()
{
    coordinator c1;
    c1.getdata();
    c1.displaydata();
}