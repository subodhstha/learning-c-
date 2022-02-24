/*Write a program to calculate the sum of 5 numbers, if user enters negative
number then skip the negative numbers from the calculation [note: use loop, if
and continue statement]
*/
#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the 5 number to add ";
    for (int i = 0; i < 5; i++)
    {
        cin>>n;
        if(n<0)
        {
            continue;
        }
        sum = sum + n; 
    }
    cout<<"The of the +ve number are "<<sum;
}