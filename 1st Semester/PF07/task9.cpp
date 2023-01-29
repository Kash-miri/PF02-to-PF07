#include<iostream>
using namespace std;
void loop(int number);
main()
{
    int number=0;
    loop(number);
}
void loop(int number)
{
    for(int x=1; x<=100; x++)
    {
        number=number+x;
    }
    cout<<number;
}