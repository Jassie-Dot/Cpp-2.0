/*
    do while loop= Do some block of code first,
                   THEN repeat again if condition is true.
*/

#include<iostream>
using namespace std;
int main()
{
    int number;
    
    do
    {
        cout<<"Enter a positive number: "<<endl;
        cin>>number;
        
    } while (number < 0); // Condition to check if the number is positive.
    cout<<"You entered: "<<number<<endl;
    return 0;
}