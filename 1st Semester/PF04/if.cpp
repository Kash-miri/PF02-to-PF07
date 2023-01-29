#include<iostream>
using namespace std;

void ifPass(int marks);

main()
{
int marks;
cout<<"Enter PF marks=";
cin>>marks;
ifPass(marks);
}
			

void ifPass(int marks)
{
		if(marks>50)
		{
		cout<<"You have passed your PF quiz.";
		}
	if(marks==50)
		{
		cout<<"You barely passed.";
		}
	if(marks<50)
		{
		cout<<"You are fail in PF quiz.";
		}
}