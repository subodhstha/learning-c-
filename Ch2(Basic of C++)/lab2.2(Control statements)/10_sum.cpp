/*Write a program to calculate the sum of 5 numbers, if user enters negative number then display the sum of previous 
entered numbers [note: use loop, if and break statement]*/
#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout<<"Enter the 5 number to add ";
    for (int i = 0; i < 5; i++)
    {
        cin>>n;
        if (n < 0)
        {
            break;
        }
        
        sum = sum + n;
    }
    cout<<"The sum of the number are "<<sum;
}