#include<iostream>
using namespace std;
int main(){
    int a,b,hcf,r;
cout<<"enter the value of a and b "<<endl;
cin>>a>>b;

while(true){
    hcf=b;
    r=a%b;
    a=b;
    b=r;
    if (r==0){;
    break;}
}
cout<<"The HCF is "<<hcf;
    return 0;
}