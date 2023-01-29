#include<iostream>
using namespace std;
void discount(float amount);
main()
{
	float amount;
	while(true)
	{
		cout<<"Enter amount=";
		cin>>amount;
		discount(amount);
		cout<<endl;
	}
}


	void discount(float amount)
	{
		if(amount==500)
		{
			amount=amount-(amount*0.05);
			cout<<"Price after discount="<<amount;
			cout<<endl;
		}
		if(amount!=500)
		{
			cout<<"Price after discount="<<amount;
		}
	}
	