#include <iostream>
using namespace std;
float taxCalculator(char type, float price);
main ()
{
	float price, rate, finalprice;
	char type;
	cout<<"Enter type of vehicle=";
	cin>>type;
	cout<<"Enter price of vehicle=";
	cin>>price;
	finalprice=taxCalculator(type, price);
	cout<<"The final price on a vehicle of type "<<type<<" after adding the tax is "<<finalprice<<endl;
} 

float taxCalculator(char type, float price)
{
	float finalprice;
	if (type=='M')
	{
		finalprice=price*1.06; 
	}
	if (type=='E')
	{
		finalprice=price*1.08; 
	}
	if (type=='S')
	{
		finalprice=price*1.1; 
	}
	if (type=='V')
	{
		finalprice=price*1.12; 
	}
	if (type=='T')
	{
		finalprice=price*1.15; 
	}
	return finalprice;	
}