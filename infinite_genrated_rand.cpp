#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    for(int i=1; i<10;)
    {
        srand(time(NULL)); //Seeding the random numbers.
        int random_numbers= rand()%6+1; //Genrating the random numbers.
        cout<<random_numbers<<" "; 
    }
    return 0;
}
