#include<iostream>
using namespace std;

int main()
{
    int a[5],i;

    cout<<"Enter the number in array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"\n";

    cout<<"The values entered in array are";

    for (i=0;i<5;i++)
    {
        cout<<a[i];
    }
    return 0;
}