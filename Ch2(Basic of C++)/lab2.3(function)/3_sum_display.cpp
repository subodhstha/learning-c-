/*Write a program which has three user-defined functions named readData( ), processData( ), 
and displayData(). Use readData( ) function to read the two fractional numbers from keyboard, 
processData( ) to sum these numbers and displayData()  to display the sum
*/
#include<iostream>
using namespace std;
int readData(int a, int b)
{
    cin>>a>>b;
    return a, b;
}
int processData(int a, int b)
{
    int c;
    c = a+b;
    return (c);
}
void displayData()
{
    cout<<"The sum of the number is ";
}
int main()
{
    int a,b;
    cout<<"Enter any number ";
    readData(a,b);
    displayData();
    processData(a,b);
    return 0;
}