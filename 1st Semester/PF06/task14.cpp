#include<iostream>
using namespace std;
float output(int holidays, int weekends, string year);
main()
{
    string year;
    int holidays;
    int weekends,result;
    cout<<"Enter leap year or normal year=";
    cin>>year;
    cout<<"Enter number of holidays=";
    cin>>holidays;
    cout<<"Enter number of weekends=";
    cin>>weekends;
    result=output(holidays,weekends,year);
    cout<<"Result="<<result;
}
float output(int holidays, int weekends, string year)
{
    float result;
     result= (0.6667 * holidays) + ((48 - weekends) * 0.75) + weekends; 
    if(year=="leap")
    {
         result=result*1.15;
    }
    return result;
}