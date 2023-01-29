#include<iostream>
using namespace std;
int check(int number, int digit);
main()
{
    int number,digit;
    cout<<"Enter any number=";
    cin>>number;
    cout<<"Enter any digit=";
    cin>>digit;
    cout<<check(number,digit);
}
int check(int number, int digit)
{
    int counter=0, count1;
    while(number>0)
    {
        number=number/10;
        count1=number%10;
        if(count1==digit || count1==0)
        {
            counter=counter+1;
        }
    }
    return counter;  
} 