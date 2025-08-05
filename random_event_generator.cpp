#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(NULL)); //Seeding the random numbers.
    int random_numbers= rand()%6+1; // Generating the random numbers.
    cout<<random_numbers<<endl; // Printing the random numbers.
    
    switch(random_numbers)// switch case to check random numbers.
    {
        case 1: cout<<"You win a BUMPER STICKER!"<<endl; break;
        case 2: cout<<"You win a T-SHIRT!"<<endl; break;
        case 3: cout<<"You win a MUG!"<<endl; break;
        case 4: cout<<"You win a KEYCHAIN!"<<endl; break;
        case 5: cout<<"You win a PEN!"<<endl; break;
        case 6: cout<<"You win a DILDO!"<<endl; break;
        default: cout<<"YOU LOOSE!!!"<<endl; break;
    }
}