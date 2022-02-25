/*Write a function sumNatural( ) which receives number n as its arguments and returns sum of first  n natural numbers 
(e.g., if n=5 then sum of first natural number =1+2+3+4+5=15)*/
#include<iostream>
using namespace std;
int sumNatural(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int a;
    cout<<"Enter the value of n ";
    cin>>a;
    cout<<"The sum of natural number is "<<sumNatural(a);
}