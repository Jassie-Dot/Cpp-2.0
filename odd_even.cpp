#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any integer !!"<<endl;
    cin>>a;

    cout<<"You entered :"<<a<<endl;

    if(a%2==0)
        {
            cout<<"The number is Even !"<<endl;
        }
    else
        {
            cout<<"The number is Odd !"<<endl;
        }
}