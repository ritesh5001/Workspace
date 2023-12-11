#include<iostream>
using namespace std;
    int friend1(int n){

        if(n==0 || n==1|| n==2){
            return n;
        }

        return friend1(n-1)+friend1(n-2)*(n-1);  
    }
    
int main(){
int a=4;
cout<<friend1(a)<<endl;
    return 0;
}