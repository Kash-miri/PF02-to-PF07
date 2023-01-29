#include<iostream>
using namespace std;
float VIP(float budget, int numberOfPeople);
float Normal(float budget, int numberOfPeople);
main()
{
    float budget,amount;
    string category;
    int numberOfPeople;
    cout<<"Enter your budget=";
    cin>>budget;
    cout<<"Enter your category (VIP or Normal)=";
    cin>>category;
    cout<<"Enter your number of people=";
    cin>>numberOfPeople;
    if(category=="VIP")
    {
       amount=VIP(budget,numberOfPeople);
       if(amount<=0)
       {
            cout<<"Not enough money! You need "<<amount<<" QR.";
       }
       else if(amount>0)
       {
            cout<<"Yes! You have "<<amount<<" QR.";
       }
    }
    else
    {
       amount=Normal(budget,numberOfPeople);
       if(amount<=0)
       {
            cout<<"Not enough money! You need "<<amount<<" QR.";
       }
       else if(amount>0)
       {
            cout<<"Yes! You have "<<amount<<" QR.";
       }
       
    }
}



float VIP(float budget, int numberOfPeople)
{
    float amount;
    float mult;
    if(numberOfPeople>=1 && numberOfPeople<=4)
    {
        amount=(budget*75)/100;
        mult=numberOfPeople*499.99;
        budget=(budget-amount)-mult;
    }
    else if(numberOfPeople>=5 && numberOfPeople<=9)
    {
        amount=(budget*60)/100;
        mult=numberOfPeople*499.99;
        budget=(budget-amount)-mult;
    }
    else if(numberOfPeople>=10 && numberOfPeople<=24)
    {
        amount=(budget*50)/100;
        mult=numberOfPeople*499.99;
        budget=(budget-amount)-mult;
    }
    else if(numberOfPeople>=25 && numberOfPeople<=49)
    {
        amount=(budget*40)/100;
        mult=numberOfPeople*499.99;
        budget=(budget-amount)-mult;
    }
    else
    {
        amount=(budget*25)/100;
        mult=numberOfPeople*499.99;
        budget=(budget-amount)-mult;
    }
    return budget;
}

float Normal(float budget, int numberOfPeople)
{
    float amount;
    float mult;
    if(numberOfPeople>=1 && numberOfPeople<=4)
    {
        amount=(budget*75)/100;
        mult=numberOfPeople*249.99;
        budget=(budget-amount)-mult;
    }
    else if(numberOfPeople>=5 && numberOfPeople<=9)
    {
        amount=(budget*60)/100;
        mult=numberOfPeople*249.99;
        budget=(budget-amount)-mult;
    }
    else if(numberOfPeople>=10 && numberOfPeople<=24)
    {
        amount=(budget*50)/100;
        mult=numberOfPeople*249.99;
        budget=(budget-amount)-mult;
    }
    else if(numberOfPeople>=25 && numberOfPeople<=49)
    {
        amount=(budget*40)/100;
        mult=numberOfPeople*249.99;
        budget=(budget-amount)-mult;
    }
    else
    {
        amount=(budget*25)/100;
        mult=numberOfPeople*249.99;
        budget=(budget-amount)-mult;
    }
    return budget;
}