#include<iostream>
using namespace std;

void add(int num_1, int num_2);
void mult(int num_1, int num_2);
void sub(int num_1, int num_2);
void div(int num_1, int num_2);

main()
{
	 int num_1;
	 int num_2;
	 char operation;
	 cout<<"Enter one of them '+','-','*','/'=";
	 cin>>operation;
	 cout<<"Enter 1st number=";
	 cin>>num_1;
	 cout<<"Enter 2nd number=";
	 cin>>num_2;
	 if(operation=='+')
		{
	 	add(num_1,num_2);
		}
	 if(operation=='*')
		{
	 	mult(num_1,num_2);
		}
	 if(operation=='-')
		{
	 	sub(num_1,num_2);
		}
	 if(operation=='/')
		{
		div(num_1,num_2);
		}
}
	
	void add(int num_1, int num_2)
	{
		int sum;
		sum=num_1+num_2;
		cout<<"Sum="<<sum;
	}

	
	void mult(int num_1, int num_2)
	{
		int multiply;
		multiply=num_1*num_2;
		cout<<"Multiplication="<<multiply;
	}

	void sub(int num_1, int num_2)
	{
		int subtraction;
		subtraction=num_1-num_2;
		cout<<"Subtraction="<<subtraction;
	}
	
	void div(int num_1, int num_2)
	{
		int division;
		division=num1/num_2;
		cout<<"Division="<<division;
	}