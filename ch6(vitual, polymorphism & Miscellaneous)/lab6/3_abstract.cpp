// Create an abstract base class place with data members name, address 
// and mobile and member function getdata( ) and display as pure virtual 
// function. Based on this class, derive a new Classes KTM and MNR  to inherit all features .

#include<iostream>
using namespace std;

class place
{
    public:
    string name, address;
    int mobile;

    void getData()
    {
        cout<<"Enter the name, address & mobile number "<<endl;
        cin>>name>>address>>mobile;
    }
    virtual void display()=0;
};

class ktm:public place
{
    void getData();
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Number: "<<mobile<<endl;
        cout<<endl;
    }
};

class mnr:public place
{
    void getData();
    void display()
    {
        
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Number: "<<mobile<<endl;
        cout<<endl;
    }
};

int main()
{
    ktm k;
    mnr m;
    place *p=&k;
    p->getData();

    p=&m;
    p->getData();

    cout<<"-----The detail-----"<<endl;
    p=&k;
    p->display();

    p=&m;
    p->display();
}