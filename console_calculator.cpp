#include<iostream>
using namespace std;
int main()
{
    double num1;
    double num2;
    char op;

    cout<<"**********************************CALCULATOR******************************************"<<endl;

    cout<<"Enter either( + - * / )"<<endl;
    cin>>op;

    cout<<"Enter number 1 :"<<endl;cin>>num1;
    cout<<"Enter number 2 :"<<endl;cin>>num2;

    switch(op)
    {
        case '+': cout<<"The add of number is : "<<num1+num2<<endl; break;
        case '-': cout<<"The sub of number is : "<<num1-num2<<endl; break;
        case '*': cout<<"The multiply of number is : "<<num1*num2<<endl;    break;
        case '/': cout<<"The divide of number is : "<<num1/num2<<endl;  break;
    }

    cout<<"***************************************************************************************"<<endl;

    return 0;

}