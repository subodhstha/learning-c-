// to read the sum of the ASCII value of string
#include<iostream>
using namespace std;
int main ()
{
    char str[50];
    int i, sum = 0; 
    cout << "Enter a string : ";
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        sum = sum + str[i];
    cout << "Sum of all characters : " << sum;
    return 0;
}