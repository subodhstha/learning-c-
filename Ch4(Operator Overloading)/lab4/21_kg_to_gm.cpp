// Write a program to convert kilogram into gram using user defined to user defined data conversion.(1kg = 100gm).
#include<iostream>
using namespace std;
class weight
{
    float kg;
    int gm;
    public:
    void get_data()
    {
        cout<<"Enter the weight in kg "<<endl;
        cin>>kg;
    }
    void convert()
    {
        gm = kg * 1000;
    }
    void display()
    {
        cout<<"The weight in gram is "<<gm<<endl;
    }
};

int main()
{
    weight w1;
    w1.get_data();
    w1.convert();
    w1.display();
}