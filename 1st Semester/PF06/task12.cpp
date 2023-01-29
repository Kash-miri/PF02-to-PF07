#include<iostream>
using namespace std;
bool same(int num1, int num2, int num3);
main()
{
    int num1,num2,num3;
    cout<<"Enter 1st number=";
    cin>>num1;
    cout<<"Enter 2nd number=";
    cin>>num2;
    cout<<"Enter 3rd number=";
    cin>>num3;
    same(num1,num2,num3);
}
bool same(int num1, int num2, int  num3)
{
    if(num1==num2 && num1==num3)
    {
         cout<<"yes";
    }
    else
    {
       cout<<"no";
    }
}