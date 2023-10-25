#include<iostream>
using namespace std;
int main(){

int temp, sum=0, a, num;

cout<<"Enter the number : ";
cin>>num;

temp=num;
while(num>0){
    
    a=num%10;
    sum=sum+(a*a*a);
    num=num/10;
}
cout<<"The number is "<<sum;
if(temp==sum){
    cout<<" and it is a armstrong number.";

}
else{cout<<" and it is not a armstrong number.";}

    return 0;
}