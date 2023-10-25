#include<iostream>
using namespace std;
int main(){
int age1,age2,age3;
cout<<"enter the age of three people."<<endl;
cin>>age1,age2,age3;
if(age1<age2 && age1<age3){
    cout<<"the youngest one of three is A."<<endl;}
if(age2<age1 && age2<age3)
    {cout<<"the youngest one of three is B."<<endl;}
if(age3<age1 && age3<age2)
{cout<<"the youngest one of three is C."<<endl;}
return 0;}