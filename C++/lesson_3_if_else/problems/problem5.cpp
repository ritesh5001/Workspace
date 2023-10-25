//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.
#include<iostream>
using namespace std;
int main(){
int salary,bonus,year;
cout<<"how old are you working there."<<endl;
cin>>year;
cout<<"what is your salary." <<endl;
cin>>salary;
bonus=(salary*5/100);
if(year>5){
    cout<<"your bonus is "<<bonus<<endl;
    cout<<"your salary is "<<salary+bonus<<endl;
}
else{cout<<"you are not eligible for bonus."<<endl;}
    return 0;}