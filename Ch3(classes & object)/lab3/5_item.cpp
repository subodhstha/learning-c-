// Write a class Item with data members numbers and cost and  members functions getdata( ) and putdata
//  . Read the data for two Items and display the Item details.
#include<iostream>
using namespace std;
class item
{
    int number, cost;
    public:
    void putdata()
    {
        cout<<"Enter the number and cost"<<endl;
        cin>>number>>cost;
    }
    void getdata()
    {
        cout<<"Item number = "<<number<<endl;
        cout<<"Cost = "<<cost<<endl;
    }
};
int main()
{
    item a1,a2;
    a1.putdata();
    a2.putdata();
    a1.getdata();
    a2.getdata();
}