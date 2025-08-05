/*
    type convirson =  * Conversion a value of one data type to another 
                      * Implicit = automatic
                      * Explicit = Precede value with new data type (int)
*/

#include<iostream>
using namespace std;
int main()
{
    int correct = 8;
    int questions = 10;
    double score = (double)correct/(double)questions*100;

    cout<< score<<" %"<<endl;

    return 0;
}