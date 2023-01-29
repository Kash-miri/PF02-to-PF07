#include<iostream>
using namespace std;
int totalDigit(int num);
main()
{
    int num;
    cout<<"Enter any number=";
    cin>>num;
    cout<<totalDigit(num);
}

int totalDigit(int num)
{
    int counter=0;
    while(num>0)
    {
        num=num/10;
        counter=counter+1;
    }
    return counter;
}