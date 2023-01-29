#include<iostream>
using namespace std;
int hcf(int num1, int num2);
int lcm(int num1, int num2, int HCF);
main()
{
    int num1,num2,HCF,LCM;
    cout<<"Enter 1st number=";
    cin>>num1;
    cout<<"Enter 2nd number=";
    cin>>num2;
    HCF=hcf(num1,num2);
    LCM=lcm(num1,num2,HCF);
    cout<<"LCM="<<LCM;
}
int hcf(int num1, int num2)
{
    int hcf = 1;
    int c = 1;

    while (c != num1 && c != num2)
    {
        if (num1 % c == 0 && num2 % c == 0)
        {
            hcf = c;
        }
        c++;
    }
    return hcf;
}
int lcm(int num1, int num2, int HCF)
{
    int LCM=(num1 * num2) / HCF;
    return LCM;
}