#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age";
    cin>>age;
    switch(age)
    {
     case 18:
     cout<<"Your are 18"<<endl;
     break;

     case 24:
     cout<<"You are 24"<<endl;
     break;

     case 41:
     cout<<"You are 41"<<endl;
     break;

     default:
     cout<<"No special case"<<endl;
     break;
    }
    return 0;
}