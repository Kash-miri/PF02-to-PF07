#include<iostream>
using namespace std;

void printname(string name);
main()
{
string name="Aleena";
printname(name);
cout<<endl;

printname("Amina");
cout<<endl;

string secondname;
	cout<<"Enter name=";
	cin>>secondname;
	printname(secondname);
}


void printname(string name)
{
	cout<<"My name is"<<name;
}