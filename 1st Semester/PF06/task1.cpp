#include<iostream>
using namespace std;
int check(int marks);
main()
{
    int marks;
    char grade;
    cout<<"enter marks=";
    cin>>marks;
    grade=check(marks);
    cout<<"grade="<<grade;
}

int check(int marks)
{
    char grade;
    if(marks<=50)
    {
    grade='F';
    }
    else if(marks>50 && marks<=60)
    {
        grade='E';
    }
    else if (marks>61 && marks<=70)
    {
        grade='D';
    }
    else if(marks>71 && marks<=80)
    {
        grade='C';
    }
    else if(marks>81 && marks<=90)
    {
        grade='B';
    }
    else 
    {
        grade='A';
    }
    return grade;
}