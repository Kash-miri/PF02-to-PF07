#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter any number greater than zero=";
    cin>>number;
    while(number<=0)
    {
        cout<<"Error! entered number is less than zero, enter again=";
        cin>>number;
    }
}