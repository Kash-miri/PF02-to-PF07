#include<iostream>
using namespace std;

bool IsSame(string word1,string word2);
main(){

string WordOne,WordTwo;
string word1, word2;
cout<<"Enter Word one :";
cin>>WordOne;
cout<<"Enter Word two:";
cin>>WordTwo;
string outPut=IsSame(word1,word2);
cout<<outPut;
}
bool IsSame(string word1,string word2){

string result;

if(word1==word2){

	result=="Yes!";
}
else{

	result=="No!";
}
return "result";

}





