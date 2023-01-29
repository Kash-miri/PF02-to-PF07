#include<iostream>
using namespace std;

int mult(int);

main()
{
	int num;
	int product;
	cout<<"enter any number=";
	cin>>num;
	product = mult(num);
	cout<<"product="<<product;
}


int mult(int num)
{

	int product;
	product =num*5;
	return (product);
}