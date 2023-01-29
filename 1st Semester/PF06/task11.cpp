#include<iostream>
using namespace std;
int check(int num);
main()
{
    int num;
    int che;
    cout<<"Enter any number=";
    cin>>num;
    che=check(num);
}
int check(int num)
{
    if(num%2==0)
    {
        cout<<"Entered number is even";
    }
    if(num%2==1)
    {
        cout<<"Entered number in odd";
    }
}