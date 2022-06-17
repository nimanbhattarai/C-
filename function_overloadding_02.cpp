#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

double add(double a,double b)
{
    return a+b;
}

int main()
{
    cout<<add(8,9);
    cout<<"\n";
    cout<<add(9.5,9.9);

    return 0;



}