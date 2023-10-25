#include <iostream>
using namespace std;
int main(){
int num1,num2;
char c;

cout<<" Enter two Number's "<<endl;
cin>>num1>>num2;

cout<<"What you have to do with these numbers "<<endl;
cin>>c;

switch (c)
{
case '+':
    cout<<"The sum is "<<num1+num2<<endl;
    break;
case '-':
    cout<<num1-num2<<endl;
    break;
case '*':
    cout<<num1*num2<<endl;
    break;
case '/':
    cout<<num1/num2<<endl;
    break;


default:
    break;
}

    return 0;
}