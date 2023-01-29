#include<iostream>
using namespace std;
main()
{
    int num1 ,num2=0 ,num3=1 ,sum=0;
    cout << "How much number of series you want=";
    cin >> num1;
    cout << num2 << "," << num3;
    for (int x=1 ; x<=num1 ; x++)
    {
        sum = num2 + num3;
        cout << "," << sum;
        num2 = num3;
        num3 = sum;
    }
}