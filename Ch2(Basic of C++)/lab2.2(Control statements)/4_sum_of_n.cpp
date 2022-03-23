//Write a program to find the sum of first n natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the value of n number\n";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout<<"The sum of first "<<n<<" natural numbers are "<<sum;
    return 0;
}