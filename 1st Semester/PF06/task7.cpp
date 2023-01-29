#include<iostream>
using namespace std;
string checkSpeed(float velocity);
main(){\

float speed;
cout<<"Enter speed:";
cin>>speed;
string result=checkSpeed(speed);
cout<<result;
}

string checkSpeed(float velocity){


if(velocity<10 )
{
	cout<<"slow";
}
else if (velocity>10||velocity<=50)
{
	cout<<"Average";
}
else if (velocity>50){
	cout<<"fast";
}

else
{
	cout<<"invalid";
}

}