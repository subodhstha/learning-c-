/*Write a program that reads weight and height of boys in a class and then count the number of boys whose weight
 is less than 50 kg and height is greater than 170 cm. */
#include<iostream>
using namespace std;
int main()
{
    int n, h, w, c = 0;
    cout<<"Enter the total number of boys\n";
    cin>>n;
    cout<<"Enter the weigt and height(cm) of the boys\n";
    for (int i = 0; i < n; i++)
    {
        cin>>w;
        cout<<"\t";
        cin>>h;
        if (w < 50 && h > 150)
        {
            c++;
        }
    }
    cout<<"The number of boys whose weght is less than 50kg and height is greater than 170cm are "<<c;
    return 0;
}