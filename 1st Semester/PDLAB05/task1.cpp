#include<iostream>
using namespace std;

int x=10;

void myfunc();

main()
{
	myfunc();
	int x=20;
	cout<<"The value of x is "<<x<<endl;
	myfunc();
}


void myfunc()
{
	cout<<"The value of x is "<<x<<endl;
	int x=20;
}

