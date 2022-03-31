// Write a program to find the sum and average of all the elements of an array by passing through function using pointer.
#include<iostream>
using namespace std;
void sum(int *p)
{
    int n,sum=0,a;
    p = &a;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>*p;
        sum = sum + *p;
    }
    cout<<"Sum:"<<sum;
}
int main()
{
    int a;
    sum(&a);
}
