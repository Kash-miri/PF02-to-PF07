#include<iostream>
using namespace std;
int loop(int num1, int num2, int mult);
main()
{
    int num1,num2,mult;
    cout<<"Enter the number whose table you want to display=";
    cin>>num1;
    loop(num1,num2,mult);
}
int loop(int num1, int num2, int mult)
{
   for(num2=1; num2<=10; num2++)
   {
        mult=num1*num2;
        cout<<num1<<"*"<<num2<<"="<<mult<<endl;
   }
}