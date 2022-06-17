#include<iostream>
using namespace std;
int main()
{
    int r,h;
    float pi=3.14;
    float volume;
    cout<<"type a number:";
    cin>>r;
    cout<<"type another number:";
    cin>>h;
    //count<<"type another number:";
    //cin>>z;
    volume=pi*r*r*h;
    cout<<"volume is:"<<(float)volume;
    return 0;

}