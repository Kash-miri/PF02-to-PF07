#include<iostream>
using namespace std;
float premium(char time, float min);
float residential(float min);
main()
{
    char serviceCode;
    char telephoneService;
    int minutes;
    float charges;
    cout<<"Enter which type of customer you are (residential or premium) select r/p=";
    cin>>serviceCode;
    cout<<"(Press 'D' for day time or Press 'N' for night time) call=";
    cin>>telephoneService;
    cout<<"Enter number of minutes you used the service=";
    cin>>minutes;
    if(serviceCode=='p'||'P')
    {
        charges=premium(telephoneService,minutes);
        cout<<"Charges are="<<charges<<"$";
    }
    else if(serviceCode=='r'||'R')
    {
        charges=residential(minutes);
        cout<<"charges are="<<charges<<"$";
    }
    else
    {
        cout<<"Invalid option";
    }
}
float premium(char time, float min)
{
    if(time=='d'||'D')
    {
        if(min>75)
        {
            min=(min-75)*0.10;
            min=min+25.00;
        }
        if(min<=75)
        {
            min=25.00;
        }
        return min;
    }
    else if(time=='n'||'N')
    {
        if(min>100)
        {
            min=(min-100)*0.05;
            min=min+25.00;
        }
        if(min<=100)
        {
            min=25.00;
        }
        return min;
    }
}
float residential(float min)
{
    if(min>50)
    {
        min=(min-50)*0.20;
        min=min+10.00;
    }
    if(min<=50)
    {
        min=10.00;
    }
    return min;
}