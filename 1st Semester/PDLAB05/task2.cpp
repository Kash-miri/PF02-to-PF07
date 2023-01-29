#include<iostream>
using namespace std;

float pyramid(float length, float width, float height);

float pyramid2(float length, float width, float height);

float pyramid3(float length, float width, float height);

float pyramid4(float length, float width, float height);

int check(int option);

main()
{
	int option;
	float length,width,height,volume;
	cout<<"enter 1 for units in kilometers, 2 for units in meters, 3 for units in centimeters and 4 for units in millimeters=";
	cin>>option;
	cout<<"enter lenght";
	cin>>length;
	cout<<"enter width";
	cin>>width;
	cout<<"enter height";
	cin>>height;
	check(option);
	volume=pyramid(length,width,height);
	cout<<"Volume="<<volume;
}

int check(int option)
{
	float length;
	float width;
	float height;
	if(option==1)
		{
			pyramid(length,width,height);
		}
	if(option==2)
		{
			pyramid2(length,width,height);
		}
	if(option==3)
		{
			pyramid3(length,width,height);
		}
	if(option==4)
		{
			pyramid3(length,width,height);
		}
}


float pyramid(float length, float width, float height)
{
	int volume;
	volume=(length*width*height)/3;
	return volume;
}
float pyramid2(float length, float width, float height)
{
	int volume;
	length=length*100;
	width=width*100;
	height=height*100;
	volume=(length*width*height)/3;
	return volume;
}
float pyramid3(float length, float width, float height)
{
	int volume;
	length=length*100*100;
	width=width*100*100;
	height=height*100*100;
	volume=(length*width*height)/3;
	return volume;
}
float pyramid4(float length, float width, float height)
{
	int volume;
	length=length*100*100*10;
	cout<<"lenghth="<<length;
	width=width*100*100*10;
	height=height*100*100*10;
	volume=(length*width*height)/3;
	return volume;
}


















