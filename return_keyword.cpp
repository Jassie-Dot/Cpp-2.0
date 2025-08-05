/*
    return = return a value back to the spot
             where you calles the encompassing function.    
*/
#include<iostream>
using namespace std;
int main()
{
    double length;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;

    double area;
    area= length * length;
    cout<<"The area of the rectangle is: "<<area<<endl;

    return 0;
}