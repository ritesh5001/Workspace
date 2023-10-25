#include<iostream>
using namespace std;
int main(){
int year;
cout<<"enter a year"<<endl;
cin>>year;
if (year%400==0 && year%100==0 && year%4==0)
{
    cout<<" Leap Year."<<endl;

}
else if(year%400!=0 && year%100==0 && year%4==0)
{cout<<"Not a Leap Year."<<endl;}
else if(year%400==0 && year%100!=0 && year%4==0)
{cout<<"Leap Year."<<endl;}

else if(year%400!=0 && year%100!=0 && year%4==0)
{cout<<"Leap Year"<<endl;}
else
{
    cout<<"Not a Leap Year.";
}

    return 0;
}