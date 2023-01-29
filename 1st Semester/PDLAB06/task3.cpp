#include<iostream>
using namespace std;
string check(int date, string month);
main()
{
    int date;
    string month,sign;
    cout<<"Enter date=";
    cin>>date;
    cout<<"Enter month=";
    cin>>month;
    sign=check(date,month);
    cout<<"sign="<<sign;
}
string check(int date, string month)
{
    string sign;
    if(date>=21 && month=="march")
    {
        sign="Aries";
    }
    if(date<=19 && month=="april")
    {
        sign="Aries";
    }
    if(date<=20 && month=="april")
    {
        sign="Taurus";
    }
    if(date>=20 && month=="May")
    {
        sign="Taurus";
    }
    if(date>=21 && month=="may")
    {
        sign="Gemini";
    }
    if(date<=20 && month=="june")
    {
        sign="Gemini";
    }
    if(date>=21 && month=="june")
    {
        sign="Cancer";
    }
    if(date<=22 && month=="july")
    {
        sign="Cancer";
    }
    if(date>=23 && month=="july")
    {
        sign="Leo";
    }
    if(date<=22 && month=="august")
    {
        sign="Leo";
    }
    if(date>=23 && month=="august")
    {
        sign="Virgo";
    }
    if(date<=22 && month=="september")
    {
        sign="Virgo";
    }
    if(date>=23 && month =="september")
    {
        sign="Libra";
    }
    if(date<=22 && month=="october")
    {
        sign="Libra";
    }
    if(date>=23 && month=="october")
    {
        sign="Scorpio";
    }
    if(date<=21 && month=="november")
    {
        sign="Scorpio";
    }
    if(date>=22 && month=="november")
    {
        sign="Sagittarius";
    }
    if(date<=21 && month=="december")
    {
        sign="Sagittarius";
    }
    if(date>=22 && month=="december")
    {
        sign="Capricorn";
    }
    if(date<=19 && month=="january")
    {
        sign="Capricorn";
    }
    if(date>=20 && month=="january")
    {
        sign="Aquarius";
    }
    if(date<=18 && month=="february")
    {
        sign="Aquarius";
    }
    if(date>=19 && month=="february")
    {
        sign="Pisces";
    }
    if(date<=20 && month=="march")
    {
        sign="Pisces";
    }
    return sign;
}