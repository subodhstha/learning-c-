// Write a class Item with data members numbers and cost and  members functions getdata( ) and putdata
//  . Read the data for two Items and display the Item details.
#include<iostream>
using namespace std;
class item
{
    int number, cost;
    public:
    void getdata(){
        cout<<"Enter the number and cost";
        cin>>number>>cost;
    }
    
};