#include<iostream>
using namespace std;
class rect
{
private:
    int l,b;
public:
    rect()
        {
            l= 1;
            b = 2;
        }
    ~rect()
    {
        cout<<l<<endl;
        cout<<b<<endl;
        cout<<"memory is being deallocated";
    }

};
int main()
{
    rect o1;
    return 0;
}