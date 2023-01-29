
#include<iostream>
using namespace std;
int sum(int number);
main()
{
    int number;
    cout<<"Enter any number=";
    cin>>number;
    cout<<sum(number);
}
int sum(int number)
{
    int rem,sum=0;
    while(number>0)
    {
        rem=number%10;
        number=number/10;
        sum=sum+rem;
    }
    return sum;
}