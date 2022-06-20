#include<iostream>
#include<iomanip>
using namespace std;
int count=0;
int main()
{
    ::count=1;
    int count=0;
    cout<<::count<<endl;
    cout<<count;
}
