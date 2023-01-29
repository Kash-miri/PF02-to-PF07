#include<iostream>
using namespace std;
int upper(int x, int row, int clmn);
int lower(int x, int row, int clmn);
main()
{
    int x,row,clmn;
    upper(x,row,clmn);
    lower(x,row,clmn);
}
int upper(int x, int row, int clmn)
{
    for(row=15; row>=1; row=row-1)
    {
        for(clmn=1; clmn<=row ; clmn=clmn+1)
        {
            cout<<" ";
        }
        for(clmn=15; clmn>=row ; clmn=clmn-1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int lower(int x, int row, int clmn)
{
    for(row=15; row>=1; row=row-1)
    {
        for(clmn=15; clmn>=row ; clmn=clmn-1)
        {
            cout<<" ";
        }
        for(clmn=1; clmn<=row ; clmn=clmn+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}