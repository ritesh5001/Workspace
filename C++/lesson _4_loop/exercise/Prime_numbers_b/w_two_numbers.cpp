#include<iostream>
using namespace std;
int main (){
int n1,k,i;
cout<<"Enter a Number"<<endl;
cin>>n1;

for(i=2;  i<=n1 ; i++)

{
for(k=2; k<i ; k++)
{
    if(i%k==0){
cout<<"Not a Prime"<<endl;
break;
if(k==i){
    cout<<k;
}
}
}
}
}
