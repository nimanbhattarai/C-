#include<iostream>
using namespace std;

struct employee
{
    int ID;
    float salary;
};

int main()
{
    struct employee niman;
    niman.ID = 1;
    niman.salary = 120000;
    cout<<"The value is "<<niman.ID<<endl;
    cout<<"The value is "<<niman.salary<<endl;
    return 0;

}

    
