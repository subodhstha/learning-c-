/*Write a program to calculate the simple interest from the values of principle, time and rate of
interest input from the user. [Hint: I=PTR/100]*/
#include<iostream>
using namespace std;
int main()
{
   int p, t, r;
   float si;
   cout<<"Enter the value of principle, time & rate \n";
   cin>>p>>t>>r;
   si = (float)(p*t*r)/100;
   cout<<"The simple intrest of principle of "<<p<<", time of "<<t<<" year & rate of "<<r<< " are \n"<<si;
   return 0;
}