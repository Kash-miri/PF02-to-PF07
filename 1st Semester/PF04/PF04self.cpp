#include<iostream>
using namespace std;
void temprature(float fahrenheit);
main()
{
	float fahrenheit;
	cout<<"Enter temprature in Fahrenheit=";
	cin>>fahrenheit;
	temprature(fahrenheit);
}

	void temprature(float fahrenheit)
		{
			float temp=98.6;
			if(fahrenheit==temp)
			{
				cout<<"Normal";
			}
		}
