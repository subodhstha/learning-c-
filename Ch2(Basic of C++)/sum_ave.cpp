#include<iostream>
using namespace std;
int main()
{
    int a, b, sum;
    float ave;
    cout<<"Enter any two numbers \n";
    cin>>a>>b;
    sum = a+b;
    ave = float(sum)/2;
    cout<<"Sum and average of "<<a<<" and "<<b<<" are "<<sum<<" and "<<ave;
    return 0;
}