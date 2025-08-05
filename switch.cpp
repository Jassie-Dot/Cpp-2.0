/*
    switch = alternative to using many "else if" statements compare one value against matching cases.
*/

#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter the month (1-12) : "<<endl;
    cin>>month;

    switch(month)
    {
        case 1: cout<<"It is Jan"; break;
        case 2: cout<<"It is feb"; break;
        case 3: cout<<"It is march"; break;
        case 4: cout<<"It is april"; break;
        case 5: cout<<"It is May"; break;
        case 6: cout<<"It is June"; break;
        case 7: cout<<"It is July"; break;
        case 8: cout<<"It is August"; break;
        case 9: cout<<"It is september"; break;
        case 10: cout<<"It is october"; break;
        case 11: cout<<"It is november"; break;
        case 12: cout<<"It is December"; break;
        default: cout<<"Please enter the number from 1-12"; break;
    }

    return 0;
}