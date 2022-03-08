/*Write a program to read number of employees, n, working in a company. 
Reserve the memory required to store age of n employees using new operator. 
Read age of n employees from user and count the number of employees of age above 60 years.*/
#include<iostream>
using namespace std;

int main()
{
    int n, a,*p,num=0;
    cout<<"Enter the number of employee ";
    cin>>n;
    p = new int[n];
    if (!p)
    {
        cout<<"Allocation failed!";
        exit(0);
    }
    else
    {
        cout<<"Allocation sucesfull!"<<endl;
        cout<<"Enter the age of the employee"<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>*(p+i);
            if (*(p+i)> 60)
            {
                num++;
            }
        }
        cout<<"The number of employees of age above 60 years are "<<num<<endl;
    }
    delete[]p;
    cout<<"De-allocated sucessfully!";
    return 0;

}