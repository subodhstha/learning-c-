/*Write a function Reverse() which receives number n as its arguments and returns reverse of n 
(e.g., if n=123 then reverse of n =321)*/
#include<iostream>
using namespace std;
int reverse(int n)
{
    int r, re=0;
    while (n != 0)
    {
        r = n%10;
        re = re*10 + r;
        n = n/10;
    }
    return re;    
}

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"The reverse of the number is "<<reverse(n);
}