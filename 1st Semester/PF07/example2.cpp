#include<iostream>
using namespace std;
main()
{
    string str;
    cout<<"Enter yes or no=";
    cin>>str;
    while(str!="yes")
    {
        cout<<"sad"<<endl;
        cin>>str;
    }
    cout<<"happy"<<endl;
}