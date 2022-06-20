// Write a program to illustrate the sequential access of  file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    int roll;
    ofstream outfile;
    outfile.open("stu.doc");
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the roll no.: ";
    cin>>roll;

    outfile<<name<<endl;
    outfile<<roll<<endl;

    outfile.close();

    ifstream infile;
    infile.open("stu.doc");

    infile>>name;
    infile>>roll;

    cout<<endl;
    cout<<endl;

    cout<<"----Data from file----"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no.: "<<roll<<endl;
    infile.close();
    return 0;
}