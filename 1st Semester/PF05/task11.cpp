#include<iostream>
using namespace std;
char check(char);
main()
{
	char x;
	cout<<"Enter alphabet=";
	cin>>x;
	check(x);
}

char check(char x)
{
	if(x=='A')
		cout<<"you have entered A";
	if(x=='a')
		cout<<"you have entered a";
}