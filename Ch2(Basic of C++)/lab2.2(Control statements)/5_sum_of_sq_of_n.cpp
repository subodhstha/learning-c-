//Write a program to find the sum of square of first n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int n, s=0;
    cout<<"Enter the value of n\n";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        s = s + i * i;
    }
    cout<<"The sum of square of first "<<n<<" natural numbers are "<<s;
    return 0;
}