#include<iostream>
using namespace std;

void check(int age);

main()
{
	int age;
	while(true)
	{
		cout<<"Enter your age=";
		cin>>age;
		check(age);
		cout<<endl;
	}
}

	void check(int age)
	{
		if(age==18)
		{
		cout<<"You are eligible.";
		}
		if(age<18)
		{
		cout<<"You are not eligible.";
		}
		if(age>18)
		{
		cout<<"You are eligible.";
		}
	}