//Write a program that will ask for the roll number and marks obtained by a student in seven different subjects and
// display the percentage score of that student.
#include<iostream>
using namespace std;
int main()
{
    int r, m, s=0;
    float p;
    cout<<"Enter Roll no. of student\n";
    cin>>r;
    cout<<"Enter the marks obtain by the student\n";
    for (int i = 0; i < 7; i++)
    {
        cin>>m;
        s = s + m;
    }
    p = (float)s / 7;
    cout<<"The percentage obtain by the student is "<<p;
}