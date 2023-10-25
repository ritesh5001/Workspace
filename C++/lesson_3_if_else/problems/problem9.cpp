//A student will not be allowed to sit in exam if his/her attendence is less than 75%.
//Take following input from user
//Number of classes held
//Number of classes attended.
//And print
//percentage of class attended
//Is student is allowed to sit in exam or not.



#include<iostream>
using namespace std;
int main(){
int classes,A,B,P;
cout<<"enter the number of class held (A). "<<endl;//class held will be denoted by A.
cin>>A;
cout<<"enter the number of classes attended (B). "<<endl;//class attended will be denoted by B.
cin>>B;
P==(B/A)*100;
cout<<P<<endl;
if(P>=75){
    cout<<"you are allowed to sit in the exam"<<endl;
}

    return 0;
}