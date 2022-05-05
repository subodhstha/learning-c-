// Write a program to convert object from class that represents temperature in Celsius scale 
// to object of a class that represents it in Fahrenheit scale.
#include<iostream>
using namespace std;
class temperature
{
    float celsius, fahrenheit;
    public:
    void get_data()
    {
        cout<<"Enter the temperature in celsius"<<endl;
        cin>>celsius;
    }
    void convert()
    {
        fahrenheit = (celsius*1.8) + 32;
    }
    void display()
    {
        cout<<"The temperature in fahrenheit is "<<fahrenheit<<endl;
    }
};

int main()
{
    temperature t1;
    t1.get_data();
    t1.convert();
    t1.display();
}