//'A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//Ask user for quantity
//Suppose, one unit will cost 100.
//Judge and print total cost for user
#include<iostream>
using namespace std;
int main(){
int quantity,price;
cout<<"enter the quantity you have two purchased."<<endl;
cin>>quantity;
price=quantity*5;
if (quantity>100){
    cout<<"the total cost is - "<< price-(price*.1) <<endl;
}
else{
    cout<<"the total cost is "<< price <<endl;
}
    return 0;
}