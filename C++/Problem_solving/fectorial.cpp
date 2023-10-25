#include<iostream>
using namespace std;
int main(){

int n,f;
cout<<"enter the num"<<endl;
cin>>n;
f=n;
for (int i=1;i<n;i++){
    f=f*i;

}
cout<<f;
return 0;
}