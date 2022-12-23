#include<iostream>
using namespace std;
main()
{
system("Color 0A");
float charge;
float current;
float time;
cout<<"Enter time=";
cin>>time;
cout<<"Enter charge=";
cin>>charge;
current=charge/time;
cout<<"Current="<<current;
}