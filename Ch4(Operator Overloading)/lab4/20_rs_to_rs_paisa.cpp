// Write a program to convert 100.25 rupee into the object of class Currency with data members RS and paisa.
#include<iostream>
using namespace std;
class currency
{
    float rs;
    int paisa;
    public:
    void get_data()
    {
        cout<<"Enter the float value of Rs. "<<endl;
        cin>>rs;
    }
    void convert()
    {
        paisa = (rs - (int)rs) * 100;
        rs = (int)rs;
    }
    void display()
    {
        cout<<"Rs. = "<<rs<<endl;
        cout<<"Paisa = "<<paisa<<endl;
    }
};
int main()
{
    currency c1;
    c1.get_data();
    c1.convert();
    c1.display();
}
