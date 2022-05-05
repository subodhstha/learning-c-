// Write a program to convert 10.5 kg weight into the object of class Convert with data members kg and gram.
#include<iostream>
using namespace std;
class weight
{
    float kg;
    int gram;
    public:
    void get_data()
    {
        cout<<"Enter the weight in kg(float)"<<endl;
        cin>>kg;
    }
    void convert()
    {
        gram = (kg - int(kg))* 1000;
        kg = int(kg);
    }
    void display()
    {
        cout<<"The weight are"<<endl;
        cout<<"kg = "<<kg<<endl;
        cout<<"gram = "<<gram<<endl;
    }
};

int main()
{
    weight a1;
    a1.get_data();
    a1.convert();
    a1.display();
}