#include<iostream>
using namespace std;
int main()
{
    cout<<"**********************************TEMPERATURE CONVERSION*********************************"<<endl;
    cout<<"This program converts temperature from Celsius to Fahrenheit and Kelvin."<<endl;
    cout<<endl;
    double temp;
    char unit;

    cout<<"Enter the temperature in celsius;";
    cin>>temp;
    cout<<"Enter the unit to convert to (F for Fahrenheit, K for Kelvin):";
    cin>>unit;

    double convertedtemp;
    if(unit =='f' || unit == 'F')
        {
            convertedtemp=(temp*9/5)+32;
            cout<<"The temperature in fahrenhiet is : "<<convertedtemp<<" F"<<endl;
            cout<<endl;
        }
    else if(unit == 'k' || unit == 'K')
        {
            cout<<"The temperature in kelvin is : "<<temp+273.15<<" K"<<endl;
            cout<<endl;
        }
    else
        {
            cout<<"Invalid unit entered. Please enter 'f' for Fahrenheit or 'k' for Kelvin."<<endl;
            cout<<endl;
        }

    cout<<"****************************************************************************************"<<endl;
    return 0;
}