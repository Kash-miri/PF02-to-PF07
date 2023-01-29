#include <iostream>
#include <cmath>
using namespace std;

float Posroot(int a, int b, int c);
float Negroot(int a, int b, int c);

int main()
{ 
int a, b, c;
float posroot, negroot;
while (true){
cout << "Enter value of coefficient a=";
cin >> a;
cout << "Enter value of coefficient b=";
cin >> b;
cout << "Enter value of constant c=";
cin >> c;

posroot = Posroot(a, b, c);
cout << "x=" << posroot << endl;
negroot = Negroot(a, b, c);
cout << "x=" << negroot << endl;
}
return 0;}

float Posroot(int a, int b, int c)
{
float root;
float squareb = pow(b, 2);
float indis = squareb - (4 *a * c);
float discriminant = sqrt(indis);

root = ((-b) + discriminant ) / (2 * a);
return root;
}

float Negroot(int a, int b, int c)
{
float root;
float squareb = pow(b, 2);
float indis = squareb - (4 *a * c);
float discriminant = sqrt(indis);

root = ((-b) - discriminant ) / (2 * a);
return root;
}