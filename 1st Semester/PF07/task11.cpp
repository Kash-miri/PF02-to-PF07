#include<iostream>
using namespace std;
int loop(int num);
main()
{
    int num,sum;
    cout<<"Enter any number=";
    cin>>num;
    sum=loop(num);
    cout<<sum;
}
int loop(int num)
{
    int x,sum=0;
    for(x=1;x<=num;x++)
    {
        sum=sum+x;
    }
    return sum;
}