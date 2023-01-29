#include<iostream>
#include<cmath>
using namespace std;

float conversion(float base, float hypo);

main()
{
 float base;
 float hypo;
 float height;
 cout<<"enter base=";
 cin>>base;
 cout<<"enter hypotenuse=";
 cin>>hypo;
 height = conversion(base,hypo);
 cout<<"height="<<height;
 }



float conversion(float base, float hypo)
{
	float height;
	float radian;
	radian=57.2958;
	float degree=hypo;
	radian=degree/radian;
	float angle;
	angle=tan(radian);
	height=angle*base;
	return height;
}
	