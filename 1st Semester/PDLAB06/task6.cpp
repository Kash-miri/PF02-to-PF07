#include<iostream>
using namespace std;
float studio(string month, float stays);
float apartment(string month, float stays);
main()
{
    string month;
    int stays;
    float studioPrice,apartmentPrice;
    cout<<"Enter month=";
    cin>>month;
    cout<<"Enter number of stays=";
    cin>>stays;
    apartmentPrice=apartment(month,stays);
    cout<<"Apartment="<<apartmentPrice<<"$"<<endl;
    studioPrice=studio(month,stays);
    cout<<"Studio="<<studioPrice<<"$";
}
float studio(string month, float stays)
{
    float studioPrice;
    if(month=="may"||month=="october")
    {
        studioPrice=50;
        if(stays>7 && stays<=14)
        {
            stays=stays*studioPrice;
            stays=stays-((stays*5)/100);
        }
        else if(stays>14)
        {
            stays=stays*studioPrice;
            stays=stays-((stays*30)/100);
        }
    }
    else if(month=="june"||month=="september")
    {
        studioPrice=75.20;
        if(stays>14)
        {
            stays=stays*studioPrice;
            stays=stays-((stays*20)/100);
        }
        else
        {
            stays=stays*studioPrice;
        }
    }
    else if(month=="july"||month=="august")
    {
        studioPrice=76;
        stays=stays*studioPrice;
    }
    return stays;
}
float apartment(string month, float stays)
{
    float apartmentPrice;
    if(month=="may"||month=="october")
    {
        apartmentPrice=65;
        if(stays>14)
        {
            stays=stays*apartmentPrice;
            stays=stays-((stays*10)/100);
        }
        else
        {
            stays=stays*apartmentPrice;
        }
    }
     else if(month=="june"||month=="september")
     {
        apartmentPrice=68.70;
        if(stays>14)
        {
            stays=stays*apartmentPrice;
            stays=stays-((stays*10)/100);
        }
        else
        {
            stays=stays*apartmentPrice;
        }
     }
     else if(month=="july"||month=="august")
     {
        apartmentPrice=77;
        if(stays>14)
        {
            stays=stays*apartmentPrice;
            stays=stays-((stays*10)/100);
        }
        else
        {
            stays=stays*apartmentPrice;
        }
     }
     return stays;
}