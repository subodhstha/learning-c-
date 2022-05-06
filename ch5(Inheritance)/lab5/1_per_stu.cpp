// Create a person class with attributes id and name and member function to set the member
// variables and to display those variables. Then create class student with member variables
// grade and addresses which inherits person class publically.

#include<iostream>
using namespace std;
class person
{
    int id;
    string name;
    public:
    void get_data()
    {
        cout<<"Enter the name and id of the person "<<endl;
        cin>>name>>id;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};

class student:public person
{
    string grade;
    string address;
    public:
    
    void getData()
    {
        get_data();
        cout<<"Enter the grade and address"<<endl;
        cin>>grade>>address;
    }
    void displays()
    {
        display();
        cout<<"Grade: "<<grade<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

int main()
{
    student s;
    s.getData();
    s.displays();
}