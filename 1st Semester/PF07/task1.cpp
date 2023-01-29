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
    for(int x=1; x<=10; x++)
    {
        cout<<x<<endl;
    }
}