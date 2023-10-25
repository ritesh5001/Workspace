#include<iostream>
using namespace std;
int main (){
int n,i,f;
cout<<"enter a number."<<endl;
cin>>n;
f=n;
for ( i = 1; i < n ; i++)
{
    f=f*i;}

    cout<<"the fectorial of "<<n<<" is "<<f;


    return 0;
}