#include<iostream>
using namespace std;
int main(){

int a,b;
char op;
cout<<"Enter two num Nikhilesh"<<endl;
cin>>a>>b;

cout<<"enter the operator"<<endl;
cin>>op;


cout<<endl<<endl;
switch (op)
{
case '+' :
    cout<<a+b<<endl;
    break;
case '-':
    cout<<a-b<<endl;
    break;
case '*':
    cout<<a*b<<endl;
    break;
case '/':
    cout<<a/b<<endl;
    break;
    
default:
    cout<<"enter the write operator";
    break;
}

    return 0;
}