// Write a program to  convert object from a class that represents weight of gold in Nepal tola, to object 
// of a class that represents international gold measurement of weight in gram scale( 1 tola = 11.664 gram) 
#include<iostream>
using namespace std;
class weight
{
    float tola, gram;
    public:
    void get_data()
    {
        cout<<"Enter the weight in tola"<<endl;
        cin>>tola;
    }
    void convert()
    {
        gram = tola * 11.664;
    }
    void display()
    {
        cout<<"The weight in gram is "<<gram<<endl;
    }
};

int main()
{
    weight t1;
    t1.get_data();
    t1.convert();
    t1.display();
}