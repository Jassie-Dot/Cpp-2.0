#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name: ";
    getline(cin,name); // Allows to take input with spaces.

    if(name.length() > 12) // Check the length of the string.
        {
            cout<<"Your name cant be over 12 characters."<<endl;
            cout<<endl;
        }
    else if(name.empty()) // Check if the string is empty.
        {
            cout<<"Your name cant be empty."<<endl;
            cout<<endl;
        }
    name.append("@gmail.com"); // Append a string to the existing string.
    cout<<"Your email is : "<<name<<endl;
    cout<<endl;


    cout<<"The first character of your name is : "<<name.at(0)<<endl; //Get the first character of the string.
    cout<<endl;

    cout<<"The last character of your name is : " <<name.at(name.length()-1)<<endl; //Get the last character of the string.
    cout<<endl;


    name.insert(0,"Mr "); //Insert a string at the begining of the string.
    cout<<"Your name is : "<<name<<endl;
    cout<<endl;

    name.find(" "); // Finding the first space in the string.
    cout<<"The first space in your name is at index : "<<name.find(" ")<<endl;
    cout<<endl;

    name.erase(0);
    name.erase(13);
    cout<<"Your name is : "<<name<<endl;
    cout<<endl;
    

    return 0;
}