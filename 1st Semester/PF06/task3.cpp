#include<iostream>
using namespace std;
int check(int amount,string day, string month);
main()
{
    int amount, discount;
    string day;
    string month;
    cout<<"enter day";
    cin>>day;
    cout<<"enter month";
    cin>>month;
    cout<<"enter amount";
    cin>>amount;
    discount=check(amount,day,month);
    cout<<"discount="<<discount;
}


int check(int amount,string day, string month)
{
   float discount;
   string sunday, monday;
   string october;
   string march;
   string august, november, december;
    if(day=="sunday" && (month=="october" || "march" || "august"))
    {
        discount=amount*10/100;
    }
    else if(day=="monday" && (month=="november" || "december"))
    {
        discount=amount*5/100;
    }
    else
    {
        discount=amount;
    }
    return discount;
}