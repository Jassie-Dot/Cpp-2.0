#include<iostream>
using namespace std;
int main()
{
    string name;

    while(name.empty()) // loop until name is not empty.
    {
        cout<<"Enter your name: ";
        getline(cin, name);

        if(name.empty())
        {
            cout<<"Name cannot be empty. please try again."<<endl;
        }
    }
    cout<<"Hello, "<<name<<endl;

    return 0;
}