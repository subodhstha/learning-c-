// Write a program to find the sum of  all the elements of a 2-D array of size 3x4 using pointer.
#include<iostream>
using namespace std;

int main()
{
    int r, c, a[10][10],b[10][10], sum[10][10];
    cout<<"Enter the number of row and column"<<endl;
    cin>>r>>c;
    cout<<"Enter the data of first matrix"<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter the element a"<<i+1<<j+1<<endl;
            cin>>a[i][j];
        }
    }

    cout<<"Enter the data of second matrix"<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter the element b"<<i+1<<j+1<<endl;
            cin>>b[i][j];
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum[i][j]= a[i][j] + b[i][j];
        }
    }

    cout<<"The sum of the matrix is ";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<sum[i][j]<<"   ";
            if(j == c-1)
            {
                cout<<endl;
            }
        }
    }
}