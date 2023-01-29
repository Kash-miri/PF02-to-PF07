#include<iostream>
using namespace std;

void check(int num);

main()
{
	int num;
	while(true)
	{
		cout<<"Enter any number=";
		cin>>num;
		check(num);
		cout<<endl;
	}
}

	void check(int num)
	{
		if(num%2==0)
		{
		cout<<"Even number.";
		}
		if(num%2!=0)
		{
		cout<<"Odd number.";
		}
	}