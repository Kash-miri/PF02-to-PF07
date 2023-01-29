#include<iostream>
using namespace std;
float CalculateCheapest(int n,string time);
main(){

float kilometers;
string time,vehicle;
cout<<"Enter number of kilometers:";
cin>>kilometers;
cout<<"Enter time Day or Night:";
cin>>time;

float result=CalculateCheapest(kilometers,time);
cout<<result;
}

float CalculateCheapest(int n,string time){

string type;
float FarePrice;
if(time=="day" && n<=20){
    FarePrice==0.70+(0.79*n);
}

else if (time=="night"){
	FarePrice==0.70+(0.90*n);
}
else if(n>=20 && n<100 &&time=="day"||time=="night"){
    FarePrice=0.09*n;
}
else if(n>=100 && time=="day"||time=="night"){
	FarePrice=0.06*n;
}
return FarePrice;
}