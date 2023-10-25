#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"what the value of n1 and n2."<<endl;
    cin>>n1>>n2;
    char op ;
    cout<<"enter the op. "<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
    case '*':
        cout<<n1*n2<<endl;
    case '/':
        cout<<"the value is "<<n1/n2<<endl;
        break;
    default:
    cout<<"enter the correct oparator "<<endl;
        break;
    }

    return 0;}