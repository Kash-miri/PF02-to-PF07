#include<iostream>
using namespace std;

float CalcluatePrice(string product,string city,int n);
main(){
string city,product;
int quantity;
cout<<"Enter City name:";
cin>>city;
cout<<"Enter prodct name:";
cin>>product;
cout<<"Enter Quantities:";
cin>>quantity;
float result=CalcluatePrice( product, city,quantity);
cout<<result;
}
float CalcluatePrice(string product,string city,int n){
float price;
if(city=="sofia" && product=="coffee")
  {
	price=n*0.50;
  }
	{
		if(city=="varna"&& product=="water")
			price=n*0.80;
	}
	
    if(city=="varna"&&product=="coffee"){

   	price=n*0.45;
   }
  

return price;
}