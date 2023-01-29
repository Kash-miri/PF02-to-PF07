#include<iostream>
using namespace std;
string check(string temprature, string humidity);
main()
{
    string temprature,humidity;
    cout<<"Tell the temprature=";
    cin>>temprature;
    cout<<"Tell the humidity=";
    cin>>humidity;
    check(temprature,humidity);
}

string check(string temprature, string humidity)
{
    if(temprature=="warm" && humidity=="dry")
    {
        cout<<"Play Tennis.";
    }
    else if(temprature=="warm" && humidity=="humid")
    {
        cout<<"Swim.";
    }
    else if(temprature=="cold" && humidity=="dry")
    {
        cout<<"Play Basketball.";
    }
    else if(temprature=="cold" && humidity=="humid")
    {
        cout<<"Watch TV.";
    }
}