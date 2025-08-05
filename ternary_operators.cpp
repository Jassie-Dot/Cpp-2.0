/*
    ternary operator ?= replacement to an if/else statement

    condition ? expression1:expression2;
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int grade;
//     cout<<"Enter the grades you scored..."<<endl; cin>>grade;
//     grade >=60? cout<<"You passed...":cout<<"You Failed...";

//     return 0;    
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number; cout<<"Enter a integer..."<<endl; cin>>number;
//     number%2==0?cout<<"This is a even number...":cout<<"This is a odd number...";

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age; cout<<"Enter your age"<<endl; cin>>age;
//     age>=18?cout<<"You can drive..":cout<<"You cannot drive..";

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    bool hungery;cout<<"true or false ? "<<endl; cin>>hungery;
    if(hungery==true) cout<<"You are hungery"<<endl; if(hungery==false)cout<<"You are not hungery"<<endl;
}