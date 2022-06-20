#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[25];

    //Example Of get
    cout << "Enter Your Name: ";
    cin.get(name, 25);
    cout << "Hello, " << name;
    
    return 0;
}