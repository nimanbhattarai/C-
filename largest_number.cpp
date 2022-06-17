#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter first number";
    cin>>a;

    cout<<"Enter Second number";
    cin>>b;

    cout<<"Enter Third Number";
    cin>>c;

    if(a>c)
    {
        cout<<"A is the greater number";
    }
    else if (b>c)
    {
        cout<<"B is the greatest number";
    }
    else
    {
        cout<<"C is the greatesh number";
    }
    
    return 0;
}