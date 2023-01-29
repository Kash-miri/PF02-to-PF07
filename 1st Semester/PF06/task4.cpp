#include<iostream>
using namespace std;
string check(char gender,int age);
main()
{
    int age;
    char gender;
    string title;
    cout<<"enter your age=";
    cin>>age;
    cout<<"enter your gender=";
    cin>>gender;
    title=check(gender,age);
    cout<<"your title is "<<title;
}


string check(char gender, int age)
{
    string title;
    if(gender=='m' && age>=16)
    {
        title="mr";
    }
    else if(gender=='m' && age<16)
    {
        title="master";
    }
    else if(gender=='f' && age>=16)
    {
        title="ms";
    }
    else if(gender=='f' && age<16)
    {
        title="miss";
    }
    return title;
}