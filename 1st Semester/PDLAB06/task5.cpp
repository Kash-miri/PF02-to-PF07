#include<iostream>
using namespace std;
float weekDay(string fruit, string day);
float weekend(string fruit, string day);
main()
{
    string fruit,day;
    float quantity;
    float amount;
    float price;
    cout<<"Enter fruit=";
    cin>>fruit;
    cout<<"Enter week day=";
    cin>>day;
    cout<<"Enter quantity=";
    cin>>quantity;
    if(day=="saturday"||"sunday")
    {
          amount=weekend(fruit,day);
    }
    else if(day=="monday"||day=="tuesday"||day=="wenesday"||"thursday"||"friday")
    {
          amount=weekDay(fruit,day);
    }
//     cout<<amount;
    price=amount*quantity;
    cout<<"Price="<<price;
}
float weekDay(string fruit, string day)
{
    float fruitPrice;
    
    
        if(fruit=="banana")
        {
            fruitPrice=2.50;
        }
        else if(fruit=="apple")
        {
             fruitPrice=1.20;
        }
        else if (fruit=="orange")
        {
             fruitPrice=0.85;
        }
        else if(fruit=="grapefruit")
        {
             fruitPrice=1.45;
        }
       else if(fruit=="kiwi")
        {
             fruitPrice=2.70;
        }
       else if (fruit=="pineapple")
        {
             fruitPrice=5.50;
        }
        else if(fruit=="grapes")
        {
             fruitPrice=3.85;
        }
        return fruitPrice;
}        
    
    float weekend(string fruit, string day)
    {
          float fruitPrice;
               if(fruit=="banana")
               {
                    fruitPrice=2.70;
               }
               else if(fruit=="apple")
               {
                    fruitPrice=1.25;
               }
               else if (fruit=="orange")
               {
                    fruitPrice=0.90;
                    cout << fruitPrice << endl;
               }
               else if(fruit=="grapefruit")
               {
                    fruitPrice=1.60;
               }
              else if(fruit=="kiwi")
               {
                    fruitPrice= 3.00;
                }
              else if (fruit=="pineapple")
               {
                    fruitPrice=5.60;
               }
              else if(fruit=="grapes")
               {
                    fruitPrice=4.20;
               }
               return fruitPrice;
     }
