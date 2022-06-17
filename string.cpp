#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c1[]="Niman";
    char c2[]="Bhattarai";
    
    cout<<"Concatination:"<<strcat(c1,c2)<<"\n";
    cout<<"Copy:"<<strcpy(c1,c2)<<"\n";
    cout<<"Length:"<<strlen(c1)<<"\n";

    return 0;


}