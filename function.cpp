#include<iostream>
using namespace std;

int sum (int a,int b);

int main()
{
    int num1,num2;
    cout<<"Enter the first number:";
    cin>>num1;

    cout<<"Enter the second number:";
    cin>>num2;

    cout<<"The addition of two number is:"<<sum(num1,num2);

    return 0;
}
int sum(int a,int b)
{
    int c=a+b;
    return c;
}