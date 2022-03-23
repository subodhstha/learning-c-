/*Write a function sumOfDigits() which receives number n as its arguments and returns sum of digits of n
 (e.g., n= 123 then sum of digits= 1+2+3=6).*/
#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    int r, sum=0;
    while (n != 0)
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"The sum of the digits is "<<sumOfDigits(n);
}