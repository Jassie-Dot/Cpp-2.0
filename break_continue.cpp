/*
    break = break out the loop
    continue = skip current ileration of the loop    
*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=20; i++)
    {
        if(i==10)
        {
            continue; // Skipping the number 10.
        }
        else if ( i==15)
        {
            break;
        }
        cout<<i<<endl;
    }
    cout<<"number 10 is skipped.\n"<<"Hence loop is broke at 15."<<endl;
    return 0;
}