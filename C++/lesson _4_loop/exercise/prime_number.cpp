
#include<iostream>
using namespace std;
int main(){
int num,i;
cout<<"enter a number."<<endl;
cin>>num;
for ( i = 2; i < num; i++ )
{
    if (num%i==0)
    {
       cout<<"Not a Prime Number."<<endl;
       break;
         }
    
}
if (i==num)
    {cout<<"Prime Number."<<endl;}
 

    return 0;
}