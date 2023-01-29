#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter any number=";
    cin>>num;
    while(num!=7)
    {
        cout<<num<<" is not 7";
        cin>>num;
    }
    cout<<"Given number is 7."<<endl;
}