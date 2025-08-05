#include<iostream>
#include<cmath> // by this we can acess many function.
using namespace std;
int main()
{
    double x=3.99;
    double y=5;
    double z;

    z=min(x,y); //Minimum value.
    cout<<"The minimum value is "<<z<<endl;
    cout<<endl;
    
    z=max(x,y); //Maximum value.
    cout<<"The maximum value is "<<z<<endl;
    cout<<endl;
    
    z=pow(2,4); // pow= power of.
    cout<<"The value of 2^4 is "<<z<<endl;
    cout<<endl;

    z=sqrt(9); // Square root
    cout<<"The square root of 9 is "<<z<<endl;
    cout<<endl;

    z=abs(-3); // Absolute value
    cout<<"The absolute value of -3 is "<<z<<endl;
    cout<<endl;

    z=round(x); // round off function
    cout<<"The round off function is "<<z<<endl;
    cout<<endl;

    z=ceil(x); // Ceil function
    cout<<"The ceil value of x is "<<z<<endl;
    cout<<endl;

    return 0;
}