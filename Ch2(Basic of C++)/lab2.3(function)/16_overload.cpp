//Write a program to display the integer, float and character using overloaded display function
#include<iostream>
using namespace std;
int aaa(int a, float b, char c[10])
{
    cout<<"integer= "<<a<<" float = "<<b<<" & character = "<<c;
}
int aaa(int a, float b)
{
    cout<<"integer= "<<a<<" float = "<<b;
}
int main()
{
    int a;
    float b;
    char c[10];
    cout<<"Enter the integer, float & character ";
    cin>>a>>b>>c;
    aaa(a,b,c);
    cout<<endl;
    aaa(a,b);
}