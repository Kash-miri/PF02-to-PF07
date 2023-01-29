#include<iostream>
using namespace std;


int sum(int x,int y);


main()
{
	int x,y;
	cout<<"Enter 1st number=";
	cin>>x;
	cout<<"Enter 2nd number=";
	cin>>y;
	sum(x,y);
}

int sum(int x,int y)
{
	int add;
	add=x+y;
	cout<<"add="<<add;
} 