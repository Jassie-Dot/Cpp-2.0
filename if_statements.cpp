/*
    If statements= *do something if a condition is true.
                   *if  not, then don't do it.
*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your age :"<<endl;
    cin>>a;

    if(a>=18)
    {
        cout<<"You are allowed to drive..."<<endl;
    }
    else
    {
        cout<<"You are not allowed..."<<endl;
    }

    return 0;
}