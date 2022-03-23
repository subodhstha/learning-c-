#include<iostream>
using namespace std;
void largest(int *a, int *b)
{
    if (*a > *b)
    {
        cout<<*a<<" is the largest number"<<endl;
    }
    else
    {
        cout<<*b<<" is the largest number"<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Enter any two integer"<<endl;
    cin>>a>>b;
    largest(&a,&b);
}