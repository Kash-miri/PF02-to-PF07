#include<iostream>
using namespace std;
main()
{
    int row,clmn;
    for(row=15; row>=1; row=row-1)
    {
        for(clmn=1; clmn<=row ; clmn=clmn+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}