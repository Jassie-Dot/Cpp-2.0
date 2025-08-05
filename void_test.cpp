#include<iostream>
using namespace std;
 
string name;

void happybirthday() 
{
    cout<<"Happy Birthday to you... "<<name<<endl;
    cout<<"Happy Birthday to you... "<<name<<endl;
    cout<<"Happy Birthday...Happy Birthday... "<<endl;
    cout<<"Happy Birthday to you... "<<name<<endl;
    cout<<endl;
}
int main()
{
    cout<<"What's your name : "<<endl;
    getline(cin, name);

    happybirthday();
    happybirthday();
    happybirthday();
    happybirthday();
    cout<<endl<<endl;

    return 0;
}