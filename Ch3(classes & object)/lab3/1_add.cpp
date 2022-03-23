//Write a object oriented program to read two numbers from the keyboard and display the larger value on the screen.
#include<iostream>
using namespace std;

class num{
    int a, b;
    public:
    void dataIn()
    {
        cout<<"Enter any two number to find largest number"<<endl;
        cin>>a>>b;
    }
    int largest(){
        if(a>b){
            return a;
        }
        else
        {
            return b;
        }
    }
};
int main()
{
    num a1;
    a1.dataIn();
    cout<<"The largest number is "<<a1.largest();
}