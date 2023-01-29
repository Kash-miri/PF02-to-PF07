#include<iostream>
using namespace std;
int percent(int total);
int marks(int english,int maths ,int chemistry, int socialScienece, int biology);
string check(int percent);
main()
{
    int english,maths,chemistry,socialScience,biology,total,percentage;
    string name,grade;
    cout<<"Enter your name=";
    cin>>name;
    cout<<"Enter your english marks=";
    cin>>english;
    cout<<"Enter your maths marks=";
    cin>>maths;
    cout<<"Enter your chemistry marks=";
    cin>>chemistry;
    cout<<"Enter your social science marks=";
    cin>>socialScience;
    cout<<"Enter your biology marks=";
    cin>>biology;
    total=marks(english,maths,chemistry,socialScience,biology);
    cout<<"Total marks="<<total<<endl;
    percentage=percent(total);
    cout<<"Percentage="<<percentage<<endl;
    grade=check(percentage);
    cout<<"Grade="<<grade;
}
int marks(int english,int maths, int chemistry, int socialScience, int biology)
{
    int total;
    total=english+maths+chemistry+socialScience+biology;
    return total;
}
int percent(int total)
{
    int percentage;
    percentage=total*100/500;
    return percentage;
}
string check(int percent)
{
    string grade;
    if(percent>90 && percent<=100)
    {
        grade="A+";
    }
    else if(percent<=90 && percent>80)
    {
        grade="A";
    }
    else if(percent<=80 && percent>70)
    {
        grade="B+";
    }
    else if(percent<=70 && percent>60)
    {
        grade="B";
    }
    else if(percent<=60 && percent>50)
    {
        grade="C";
    }
    else if(percent<=50 && percent>40)
    {
        grade="D";
    }
    else
    {
        grade="F";
    }
    return grade;
}