/*
   Namespace= privide a solution for preventing name conflicts
              in large projects. Each entity needs a unique name.
              A namespace allows for identically named entities as 
              long as the namespace are different.
*/


#include<iostream>
using namespace std;

namespace first // Now it will not create a error as we create a different indentity.
{
    int x=1;//cout<<x; Printing here is not allowed here.
}
    
    namespace second
    {
        int x=2;
    }

    int main()
    {
        int x=0;
        //int x=1; now if we run the program then it will give error so we have to create a unique name.
        cout<<x<<endl;
        cout<<first::x<<endl; // We have to command here to print the ifferent identity as coout<<first::x
        cout<<second::x<<endl;

        return 0;
    }