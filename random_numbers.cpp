// pseudo-random = NOT truly random (but close enough)
// random number generator  

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{ 
    srand(time(NULL)); // Seedind the random numbers.
    int ramdom_number = rand()%6+1; // Genrating the random numbers 
    cout<<ramdom_number;
    return 0;
}