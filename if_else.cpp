#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"You are eligible to vote";
    }
    else
    {
        cout<<"You are not eligible";
    }
    


    return 0;
}