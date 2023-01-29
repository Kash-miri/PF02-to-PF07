#include<iostream>
using namespace std;

void total(int amount, string day);

main()
{
	int amount;
	string day;
	while(true)
	{
		cout<<"Enter your purchase=";
		cin>>amount;
		cout<<"Enter day=";
		cin>>day;
		total(amount,day);
		cout<<endl;
	}
}

	void total(int amount, string day)
	{
		if(day=="sunday")
		{
		amount=amount-(amount*0.1);
		cout<<"Total purchase="<<amount;
		}
		if(day=="monday")
		{
		amount=amount-(amount*0.05);
		cout<<"Total purchase="<<amount;
		}
		
		if(day=="tuesday")
		{
		amount=amount-(amount*0.05);
		cout<<"Total purchase="<<amount;
		}

		if(day=="wednesday")
		{
		amount=amount-(amount*0.05);
		cout<<"Total purchase="<<amount;
		}

		if(day=="thursday")
		{
		amount=amount-(amount*0.05);
		cout<<"Total purchase="<<amount;
		}

		if(day=="friday")
		{
		amount=amount-(amount*0.05);
		cout<<"Total purchase="<<amount;
		}

		if(day=="saturday")
		{
		amount=amount-(amount*0.05);
		cout<<"Total purchase="<<amount;
		}
	}
