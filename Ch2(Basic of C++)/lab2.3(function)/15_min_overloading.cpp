/*Write a program to find the minimum value among the inputs given. Your program should contain two functions with 
signature int min (int, int) and int min (int , int, int) i.e., the first function takes 2 arguments and second function
takes three arguments and both returns minimum.. Use the concept of function overloading.*/
#include<iostream>
using namespace std;
int min(int a, int b, int c)
{
    if (a<b)
    {
        if (a<c)
        {
            cout<<a<<" is the minimum number";
        }
        else
        {
            cout<<c<<" is the minimum number";
        }
    }
    else
    {
        if (b<c)
        {
            cout<<b<<" is the minimum number";
        }
        else
        {
            cout<<c<<" is the minimum number";
        }
    }
}
int min(int a, int b)
{
    if (a<b)
        {
            cout<<a<<" is the minimum number";
        }
        else
        {
            cout<<b<<" is the minimum number";
        }
}

int main()
{
    int x= 50, y=10,z=3;
    min(x,y,z);
    cout<<endl;
    min(x,y);
    return 0;
}