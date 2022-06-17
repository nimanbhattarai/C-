#include<iostream>
using namespace std;

void swapNums(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}

int main()
{
    int firstNum=10;
    int secondNum=20;
    cout<<"before swap:"<<endl;
    cout<<firstNum<<secondNum<<endl;

    swapNums(firstNum,secondNum);
    cout<<"after swap:"<<endl;
    cout<<firstNum<<secondNum<<endl;
    return 0;
}