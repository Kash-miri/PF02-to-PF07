#include<iostream>
using namespace std;

void add(int num_1, int num_2);
void mult(int num_1, int num_2);
void sub(int num_1, int num_2);

main()
{
	 int num_1;
	 int num_2;
	 cout<<"Enter 1st number=";
	 cin>>num_1;
	 cout<<"Enter 2nd number=";
	 cin>>num_2;
	 add(num_1,num_2);
	 cout<<endl;
	 mult(num_1,num_2);
	 cout<<endl;
	 sub(num_1,num_2);
	 cout<<endl;
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