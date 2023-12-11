#include<iostream>
using namespace std;

    // int input(int n,int p)
    // {
        

    // }

    // int power(int n,int p)
    // {
    //     if(p==0)
    //     {
    //         return 1;
    //     }

    //     int prevpower = power(n,p-1);
    //     return n*prevpower;

    // }

int power (int n,int p)
{
    if(p==0)
    {
        return 1;
    }

    return n*power(n,p-1);
    
}
    

int main(){
    int n,p;
            cout<<"Enter the number : ";
        cin>>n;
        cout<<"Enter the power value : ";
        cin>>p;
    cout<<"The power is : "<<power(n,p);
    
    return 0;
}