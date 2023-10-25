#include<iostream>
using namespace std;

void swap(int a, int b)
{

    int temp=a;
    a=b;
    b=temp;
}
void swapointer(int* a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}



int main(){
int a=67;
int b=8;
cout<<"the value of a is "<<a<<endl<<"and the value of b is "<<b;
swapointer(&a,&b);
cout<<endl<<"now the swap value of a is  "<<a<<endl<<"and the swap value of b is "<<b;


    return 0;
}