#include<iostream>
using namespace std;
int main(){

int area;
float Circumfarence;
float Radius;
int pi=3.14;

cout<<"Enter the value of Radius in CM "<<endl;
cin>>Radius;

Circumfarence=2*pi*Radius;
area=pi*Radius*Radius;


cout<<endl<<endl<<"The Area is "<<area<<"cm^2";
cout<<endl<<endl<<"The Circumfarence is "<<Circumfarence<<"cm "<<endl<<endl;


    return 0;
}