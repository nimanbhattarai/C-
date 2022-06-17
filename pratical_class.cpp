#include <iostream>
using namespace std;

void print(int i)
{
    cout<<"Here is int"<<i<<endl;
}

void print(double f)
{
    cout<<"Here is float"<<f<<endl;
}

void print(char const *c)
{
    cout<<"here is char*"<<c<<endl;
}

int main()
{
    print(10);
    print(10.10);
    print("Niman");
    return 0;
}