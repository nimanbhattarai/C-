#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;

};

int main()
{
    union money m1;
    m1.rice =34;
    m1.car='c';
   cout<<m1.rice;


}