#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"How much time you want to count down from: "<<endl;
    cin>>number;

    for(int i=number; i>0; i--)
    {
        cout<<i<<endl;
    }
    cout<<"HAPPY BIRTHDAY TO YOU!"<<endl;
    return 0;
}