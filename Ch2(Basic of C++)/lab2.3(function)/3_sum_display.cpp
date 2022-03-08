/*Write a program which has three user-defined functions named readData( ), processData( ), 
and displayData(). Use readData( ) function to read the two fractional numbers from keyboard, 
processData( ) to sum these numbers and displayData()  to display the sum
*/
#include<iostream>
using namespace std;
int displayData(int c);
int processData(int a, int b);
int readData(int a, int b)
{
    cin>>a>>b;
    processData(a,b);
}
int processData(int a, int b)
{
    int c;
    c = a+b;
    displayData(c);
}
int displayData(int c)
{
    cout<<"The sum of the number is "<<c;
}
int main()
{
    int a,b;
    cout<<"Enter any two number ";
    readData(a,b);
    return 0;
}