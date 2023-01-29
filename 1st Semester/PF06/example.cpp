#include<iostream>
using namespace std;
main()
{
	int price;
	string brand;
	cout<<"enter price=";
	cin>>price;
	cout<<"enter brand=";
	cin>>brand;
	if(price<=1500 && brand=="breakout")
	{
		cout<<"Buy the dress."<<endl;
	}
	else
	{
		cout<<"Do not buy the dress."<<endl;
	}
}