#include<iostream>
using namespace std;
void loop(int num);
main()
{
    int num;
    loop(num);
}
void loop(int num)
{
    int sum=0;
    for(int x=1; x<=5; x++)
    {
        sum=sum+x;
    }
     cout<<sum<<endl;
}