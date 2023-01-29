#include<iostream>
using namespace std;

void check(int num1, int num2);

main()
{
	int num1;
	int num2;
	while(true)
	{
		cout<<"Enter 1st number=";
		cin>>num1;
		cout<<"Enter 2nd number=";
		cin>>num2;
		check(num1,num2);
		cout<<endl;
	}
}


	void check(int num1, int num2)
	{
		if(num1>num2)
		{
		cout<<"Greater number is "<<num1;
		}
		if(num2>num1)
		{
		cout<<"Greater number is "<<num2;
		}
	}