// Write a program designing a class student With  Roll, Name and marks as data members and  
// getdata( ),  showdata( ) as member functions. Read the data for five students and display 
// the roll , name and marks of those students whose marks is greater than 70.

#include<iostream>
using namespace std;
class student{
    int r,m;
    string n;
    public:
    void getdata()
    {
        cout<<"Enter the Roll no., Name & Marks of student "<<endl;
        cin>>r>>n>>m;
    }
    void showdata()
    {
        if(m>70)
        {
        cout<<"Roll No."<<r<<endl;
        cout<<"Name:"<<n<<endl;
        cout<<"Marks:"<<m<<endl;
        cout<<endl;
        }
        
    }
};
int main()
{
    student s1, s2, s3, s4, s5;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s4.getdata();
    s5.getdata();        
    s1.showdata();
    s2.showdata();
    s3.showdata();
    s4.showdata();
    s5.showdata();
}