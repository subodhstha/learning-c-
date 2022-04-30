// Write a program to convert an object of  dollar class to object of rupees class. Assume 
// that dollar class has data members dol and cent an rupees class have data members rs and paisa.

#include<iostream>
using namespace std;
class dollar
{
    int dol, cent;
    public:
    dollar()
    {
        cout<<"Enter the dollar and cent ";
        cin>>dol>>cent;
    }
    int get_dol()
    {
        return dol;
    }
    int get_cent()
    {
        return cent;
    }
};

class rupees
{
    int rs, paisa;
    public:
    rupees()
    {
        cout<<"Enter the Rs and Paisa ";
        cin>>rs>>paisa;
    }
    rupees (dollar d)
    {
        float tc, tp ,tr;
        
        if (d.get_cent()<9)
        {
            tc = d.get_cent()*10 + d.get_dol()*100;
        }
        else
        {
            tc = d.get_cent() + d.get_dol()*100;
        }
        tp = tc * 120;
        rs = tp/100;
        paisa = tp - rs * 100;
    }
    void display()
    {
        cout<<"The dollar in Rs are Rs "<<rs<<" "<<paisa<<" paisa"<<endl;
    }
};

int main()
{
    dollar d1;
    rupees r1=d1;
    r1.display();
}