#include<iostream>
using namespace std;
int time(int hour, int min);
main()
{
    int hour,min,output;
    cout<<"Enter hours=";
    cin>>hour;
    cout<<"Enter minutes=";
    cin>>min;
    time(hour,min);
}
int time(int hour, int min)
{
    if((min+15)<=59)
    {
        min=min+15;
        cout<<hour<<":"<<min;
    }
    else if((min+15)>=60)
    {
        min=(min-60)+15;
        hour=hour+1;
        if(hour==24)
        {
            hour=00;
        }
        cout<<hour<<":"<<min;
    }
}