//Create a class Temp with the required data members and member functions that are used to convert temperature given in
//  Fahrenheit to Celsius. [c=(f-32/1.8]
#include<iostream>
using namespace std;
class temp{
    int a;
    public:
    void dataIn()
    {
        cout<<"Enter the temperature in fahrenheit "<<endl;
        cin>>a;
    }
    float toCelsius()
    {
        return (a-32)/1.8;
    }
};
int main()
{
    temp f1;
    f1.dataIn();
    cout<<"Temperature in celsius is "<<f1.toCelsius();
}