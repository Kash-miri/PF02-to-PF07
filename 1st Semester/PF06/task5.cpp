#include<iostream>
using namespace std;
float totalIncome(string screen, int row, int column);
main()
{
    string screen;
    int row, column;
    float amount;
    cout<<"enter rows=";
    cin>>row;
    cout<<"enter coulumn=";
    cin>>column;
    cout<<"enter screen=";
    cin>>screen;
    amount=totalIncome(screen,row,column);
    cout<<"your amount is "<<amount;
}


float totalIncome(string screen, int row, int column)
{
    int ticket;
    if(screen=="premiere")
    {
        ticket=12*row*column;
    }
    else if(screen=="normal")
    {
        ticket=7.5*row*column;
    }
    else if(screen=="children" || "student")
    {
        ticket=5*row*column;
    }
    return ticket;
}