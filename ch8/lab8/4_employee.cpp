// Write a program to read eid, name and salary of 10 employee form keyboard and write them into a file ‘employee.doc’.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int eid[10];
    string name[10];
    float salary[10];

    ofstream outfile;
    outfile.open("employees.doc");

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter the employee id ";
        cin>>eid[i];
        cout<<"Enter the name ";
        cin>>name[i];
        cout<<"Enter the salary ";
        cin>>salary[i];
    }

    for (int i = 0; i < 10; i++)
    {
        outfile<<eid[i]<<endl;
        outfile<<name[i]<<endl;
        outfile<<salary[i]<<endl;
    }
    outfile.close();
}