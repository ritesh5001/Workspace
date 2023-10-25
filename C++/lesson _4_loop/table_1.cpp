#include<iostream>
using namespace std;
int main(){
int i,n;
cout<<"enter the number."<<endl;
cin>>n;
 for (i=1; i<=100; ++i){
    int j=i*n;
    cout<<j<<" ";
 }
    return 0;
}