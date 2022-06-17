#include<iostream>
using namespace std;
int main()
{
    char c[5];
    int i;

    cout<<"Enter the Character";
     for(i=0;i<5;i++){
    cin>>c[i];
     }
    for(i=0;i<5;i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}