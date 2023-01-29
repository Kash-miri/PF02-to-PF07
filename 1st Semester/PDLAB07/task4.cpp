
#include<iostream>
using namespace std;
void consective(int number);
main()
{
    int number;
    cout<<"Enter any number=";
    cin>>number;
    consective(number);
}
void consective(int number)
{
    for(int x=1; x<=number; x++)
    {
       if(x%4==0 && x>=4)
       {
            x=x*10;
            cout<<x<<",";
            x=x/10;
       }
       else
      {
            cout<<x<<",";
      } 
    }
}