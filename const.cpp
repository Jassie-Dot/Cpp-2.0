#include<iostream>
using namespace std;
int main()
{
    double radius;
    cout<<"Enter the radius of a circle."<<endl;
    cin>>radius;

    const double pi=3.14; // We cant change the value of pi now...
    double circumference= 2*pi*radius;

    cout<<"The radius of a circle is "<<radius<<endl;
    cout<<"The circumference of s circle is "<<circumference<<" cm"<<endl;

    return 0;
}