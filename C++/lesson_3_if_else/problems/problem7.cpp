//A school has following rules for grading system:
//a. Below 25 - F
//b. 25 to 45 - E
//c. 45 to 50 - D
//d. 50 to 60 - C
//e. 60 to 80 - B
//f. Above 80 - A
//Ask user to enter marks and print the corresponding grade.//
#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"enter your marks b/w 0 to 100"<<endl;
cin>>marks;
if(marks>=80 && marks<=100){
    cout<<"your grade is - A."<<endl;}
else if(marks<80 && marks>=60){
    cout<<"your grade is - B."<<endl;}
else if(marks<60 && marks>=50){
    cout<<"your grade is - C."<<endl;}
else if(marks<50 && marks>=45){
    cout<<"your grade is - D."<<endl;}
else if(marks<45 && marks>=25){
    cout<<"your grade is - E."<<endl;}
else if(marks<25 && marks >=0){
    cout<<"you are fail so your grade is - F "<<endl;}
else{cout<<"enter the correct marks b/w 0 to 100"<<endl;};
    return 0;
}