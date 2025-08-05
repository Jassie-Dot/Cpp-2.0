#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"How many lines you want to print ? "<<endl;
    cin>>a;
    cout<<"How many numbers you want to print in each line ? "<<endl;
    cin>>b;

    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl<<endl;
    }

}