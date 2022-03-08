// Write a program to find the sum and average of all the elements of an array using pointer.
#include<iostream>
using namespace std;

int main(){
    int n,a[n],sum=0,*p;
    float ave;
    p = a;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>*p;
        sum = sum + *p;
        p++;
    }
    ave = (float)sum/n;
    cout<<"The sum of the element in array is "<<sum<<endl;
    cout<<"The average of the element in array is "<<ave<<endl;
    return 0;

}