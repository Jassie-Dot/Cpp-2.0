#include<iostream>
using namespace std;
int main()
{
    cout<<"**********************************TEMPERATURE CONVERSION*********************************"<<endl;
    cout<<"This program converts temperature from Celsius to Fahrenheit and Kelvin."<<endl;
    double temp;
    cout<<"Enter the temperature in Celsius:";
    cin>>temp;
    double fahrenhiet;
    fahrenhiet=(temp*9/5)+32;
    cout<<"The temperature in fahrenhiet is :"<<fahrenhiet<<" F"<<endl;
    double kelvin;
    kelvin=temp+273.15;
    cout<<"The temperature in kelvin is :"<<kelvin<<" K"<<endl;

    cout<<"****************************************************************************************"<<endl;

    return 0;
}  