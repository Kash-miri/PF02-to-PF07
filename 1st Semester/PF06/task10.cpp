#include<iostream>
using namespace std;
main()
{
    int rollnumber;
    string name;
    while(true)
    {
        cout<<"Enter your roll number=";
        cin>>rollnumber;
        cout<<"Enter your name=";
        cin>>name;
        if(name=="Ali" && rollnumber==501)
        {
            cout<<"Congratulations! You got the admission.";
        }
    }
}