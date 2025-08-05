#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d,e;
   cin>>a;
   cin>>b;
   cin>>c;
   cin>>d;
   cin>>e;
   
    char op;
    cin>>op;

    if(op=='+')
    {
        cout<<"The add of the numbers  is "<<a+b+c+d+e<<endl;
    }
    else if(op=='-')
    {
        cout<<"The sub of the number is "<<a-b-c-d-e<<endl;
    }
    else if(op=='/')
    {
        cout<<"The divide of number is "<<a/b/c/d/e<<endl;
    }
    else if(op=='*')
    {
        cout<<"The multiply of the numbers is "<<a*b*c*d*e<<endl;
    }
    else if(op=='%')
    {
        cout<<"The percentage of the numbers are "<<((a+b+c+d+e)/5)<<endl;
    }
    else
    {
        cout<<"The invaild operation !"<<endl;
    }

    return 0;
}