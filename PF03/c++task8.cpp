#include<iostream>
using namespace std;
main()
{
system("Color 0A");
int megaBites;
int bits;
cout<<"Enter MB=";
cin>>megaBites;
bits=megaBites*1024*1024*8;
cout<<"MB into Bits="<<bits;
}