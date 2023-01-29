#include<iostream>
using namespace std;
bool isSymm(int NS);
main()
{
	int num;
	int N;
	bool answer;
	cout<<"enter 5 digit number=";
	cin>>num;
	answer=isSymm(N);
	if(answer==0)
	cout<<"the given digit is even";
	if(answer==1)
	cout<<"the given digit is odd";
}

bool isSymm(int N)
{ 	int answer;
	int M;
	int rem1;
	int rem2;
	int rem3;
	int div1;
	int div2;
	int rem4;
	int rem5;
	int div3;
	int div4;
rem1=M%10;
div1=M/10;
rem2=div1%10;
div2=rem2/10;
rem3=div2%10;
div3=rem3/10;
rem4=div3%10;
div3=rem4/10;
rem5=div4%10;
answer=rem1+rem2+rem3+rem4+rem5;
answer=answer%2;
return answer;
}
	
