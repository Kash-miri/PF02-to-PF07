#include<iostream>
using namespace std;
int dots(int number);
main()
{
    int number;
    cout<<"Enter any number=";
    cin>>number;
    dots(number);
}
int dots(int number)
{
    int sum=0;
    for(int x=1;x<=number; x++)
    {
        sum=(x+sum);
    }
    cout<<sum;
}