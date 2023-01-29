#include<iostream>
using namespace std;
int isGreater(int num1, int num2, int num3);
main()
{
    int num1,num2,num3;
    int greatest;
    cout<<"enter number 1=";
    cin>>num1;
     cout<<"enter number 2=";
    cin>>num2;
     cout<<"enter number 3=";
    cin>>num3;
    greatest=isGreater(num1,num2,num3);
    cout<<"greatest number="<<greatest;
}

int isGreater(int num1, int num2, int num3)
{
    int greatest;
    if(num1>num2 && num1>num3)
    {
       greatest=num1;
    }
    else if(num2>num1 && num2>num3)
    {
       greatest=num2;
    }
    else if(num3>num1 && num3>num2)
    {
       greatest=num3;
    }
    else 
    {
       greatest=0;
    }
    return greatest;
}