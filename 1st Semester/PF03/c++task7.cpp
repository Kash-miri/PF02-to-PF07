#include<iostream>
using namespace std;
main()
{
system("Color 0A");
string name;
float matric;
float inter;
float ecat;
float aggregate;
cout<<"Enter your name=";
cin>>name;
cout<<"Enter your matric marks=";
cin>>matric;
cout<<"Enter your intermediate marks=";
cin>>inter;
cout<<"Enter your ECAT marks=";
cin>>ecat;
matric=matric/1100*0.4*100;
inter=inter/1100*0.5*100;
ecat=ecat/400*0.1*100;
aggregate=matric+inter+ecat;
cout<<"Your aggregate is "<<aggregate;
}
